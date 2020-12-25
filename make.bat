@ECHO OFF

SET spell_name=math

IF [%1]==[clang] (
    clang -shared %spell_name%.c -o %spell_name%.o
    clang -c %spell_name%.c
    clang -shared -o %spell_name%.dll %spell_name%.o
    EXIT /B 0
) ELSE IF [%1]==[test] (
    IF not exist spells\%spell_name% mkdir spells\%spell_name%
    COPY %spell_name%.dll spells\%spell_name%

    CALL test.bat
    IF errorlevel 1 (
        EXIT /B 1
    )
    EXIT /B 0
) ELSE IF [%1]==[test-compiler] (
    IF not exist spells\%spell_name% mkdir spells\%spell_name%
    COPY %spell_name%.dll spells\%spell_name%

    CALL test.bat compile
    IF errorlevel 1 (
        EXIT /B 1
    )
    EXIT /B 0
) ELSE IF [%1]==[requirements] (
    git clone https://github.com/chaos-lang/chaos.git .chaos/
    CD .chaos\
    CALL make.bat requirements
    CALL make.bat requirements-dev
    IF errorlevel 1 (
        EXIT /B 1
    )
    RMDIR .chaos\
    CD ..
    EXIT /B 0
)

gcc -shared -fPIC %spell_name%.c -o %spell_name%.o
gcc -c %spell_name%.c
gcc -shared -o %spell_name%.dll %spell_name%.o -Wl,--out-implib,lib%spell_name%.a
EXIT /B 0
