@echo off

echo --- Building ---
call build.bat

if %errorlevel% EQU 0 (
    color 0a
    echo --- Starting program ---
    Debug\playground.exe
    color 07
) else (
    echo --- Build failed: %errorlevel% ---
)
