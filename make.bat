@ECHO OFF

IF [%1]==[clang] (
    clang -shared template.c -o template.o
    clang -c template.c
    clang -shared -o template.dll template.o
    EXIT /B 0
) ELSE IF [%1]==[test] (
    IF not exist spells\template mkdir spells\template
    COPY template.dll spells\template

    CALL test.bat
    IF errorlevel 1 (
        EXIT /B 1
    )
    EXIT /B 0
) ELSE IF [%1]==[requirements] (
    git clone https://github.com/chaos-lang/chaos.git .chaos/
    CD .chaos\
    CALL make.bat requirements-dev
    IF errorlevel 1 (
        EXIT /B 1
    )
    RMDIR .chaos\
    CD ..
    EXIT /B 0
)

gcc -shared -fPIC template.c -o template.o
gcc -c template.c
gcc -shared -o template.dll template.o -Wl,--out-implib,libtemplate.a
EXIT /B 0
