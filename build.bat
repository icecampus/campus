@echo off

mkdir _intermediate_x64

cd _intermediate_x64

cmake .. -G "Visual Studio 17 2022" -A x64

cd ..