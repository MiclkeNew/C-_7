cmake_minimum_required(VERSION 3.18)      
project(    
    matrixlib-use
    VERSION 0.0.1
    DESCRIPTION "Use MatrixLib"
    LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE Debug)

# создаем тестовый exe-файл для динамической библиотеки
