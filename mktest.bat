@echo off

rmdir /s /q test >nul
mkdir test\t1\t3
cd test
mkdir t2
cd..

copy /y test.txt test >nul
copy /y test.txt test\t1 >nul
copy /y test.txt test\t1\t3 >nul
copy /y test.txt test\t2 >nul
