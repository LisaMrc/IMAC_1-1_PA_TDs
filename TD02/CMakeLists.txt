cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 17)

project(TD02)

# On indique que l'on veut créer un exécutable "ex01" compilé à partir du fichier td01_ex01.cpp
add_executable(ex01 src/td02_ex01.cpp)

# On indique que l'on veut créer un exécutable "ex02" compilé à partir du fichier td01_ex02.cpp
add_executable(ex02 src/td02_ex02.cpp)

# On indique que l'on veut créer un exécutable "ex03" compilé à partir du fichier td01_ex02.cpp
add_executable(ex03 src/td02_ex03.cpp)

add_executable(ex04 src/td02_ex04.cpp)

add_executable(ex05 src/td02_ex05.cpp)

add_executable(ex06 src/td02_ex06.cpp)

add_executable(ex07 src/td02_ex07.cpp)