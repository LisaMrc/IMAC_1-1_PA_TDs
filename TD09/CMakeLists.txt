# Nous voulons un cmake "récent" pour utiliser les dernières fonctionnalités
cmake_minimum_required(VERSION 3.5)

# La version du C++ que l'on souhaite utiliser (dans notre cas C++17)
set(CMAKE_CXX_STANDARD 17)

# Le nom du projet
project(TD09)

# On indique que l'on veut créer un exécutable compilé à partir du fichier .cpp
add_executable(ex01 src/ex01.cpp)
add_executable(ex02 src/ex02.cpp)
add_executable(ex03 src/ex03.cpp)