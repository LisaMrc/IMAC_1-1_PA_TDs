cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 17)

project(TD03)

# On indique que l'on veut créer un exécutable "ex01" compilé à partir du fichier td01_ex01.cpp
add_executable(ex01 src/td03_ex01.cpp)

# On indique que l'on veut créer un exécutable "ex03" compilé à partir du fichier td01_ex03.cpp
add_executable(td03_ex02 src/td03_ex02.cpp)

# On indique que l'on veut créer un exécutable "ex03" compilé à partir du fichier td01_ex03.cpp
add_executable(ex03 src/td03_ex03.cpp)

add_executable(ex04 src/td03_ex04.cpp)

add_executable(ex05 src/td03_ex05.cpp)

add_executable(ex06 src/td03_ex06.cpp)