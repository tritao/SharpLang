@echo off
goto menu

:menu
echo Build Project Generator:
echo.
echo [1] Visual C++ 2012
echo [2] Visual C++ 2013
echo [3] GNU Make
echo.

:choice
set /P C="Choice: "
if "%C%"=="3" goto gmake
if "%C%"=="2" goto vs2013
if "%C%"=="1" goto vs2012
if "%C%"=="0" goto clean

:clean
"premake5" --file=premake4.lua clean
goto quit

:vs2012
"premake5" --file=premake4.lua vs2012
goto quit

:vs2013
"premake5" --file=premake4.lua vs2013
goto quit

:gmake
"premake5" --file=premake4.lua gmake
goto quit

:quit
pause
:end