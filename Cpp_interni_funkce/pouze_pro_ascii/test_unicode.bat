cls
@echo off
title test_unicode.bat


REM "Příliš žluťoučký kůň úpěl ďábelské ódy. (123)"
set /p argv="zadej Unicode text: "

test_unicode.exe %argv%






