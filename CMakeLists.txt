# Versão mínima do CMake necessária
cmake_minimum_required(VERSION 3.10)

# Nome do projeto
project(TodoCLI)

# Configura o padrão C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Cria o executável "todo" a partir do main.cpp
add_executable(todo src/main.cpp)