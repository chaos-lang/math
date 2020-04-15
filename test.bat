@ECHO OFF
setlocal EnableDelayedExpansion

chaos test.kaos > tmpFile
FC test.out tmpFile
IF errorlevel 1 (
    DEL tmpFile
    ECHO Fail
    EXIT /B 1
) ELSE (
    DEL tmpFile
    ECHO OK
    EXIT /B 0
)
