@ECHO OFF

IF [%1]==[clang] (
    clang -shared math.c -o math.o -lm
    clang -c math.c
    clang -shared -o math.dll math.o
    EXIT /B 0
) ELSE IF [%1]==[test] (
    IF not exist spells\math mkdir spells\math
    COPY math.dll spells\math

    CALL test.bat
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

gcc -shared -fPIC math.c -o math.o -lm
gcc -c math.c
gcc -shared -o math.dll math.o -Wl,--out-implib,libmath.a
EXIT /B 0
