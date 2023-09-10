cmake_minimum_required(VERSION 3.26)
project(Laboratory_Work_15)

set(CMAKE_CXX_STANDARD 17)

if(NOT CMAKE_CXX_EXTENSIONS)
    set(CMAKE_CXX_EXTENSIONS OFF)
endif()

SET(SOURCES
        main.cpp

        src/entities/Fio/Fio.cpp
        src/entities/Student/Student.cpp

        src/services/Student/Student.cpp
        src/services/CommandLine/Fio/Fio.cpp
        src/services/CommandLine/Student/Student.cpp
)

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    add_compile_options(
        -Werror

        -Wall
        -Wextra
        -Wpedantic

        -Wcast-align
        -Wcast-qual
        -Wconversion
        -Wctor-dtor-privacy
        -Wenum-compare
        -Wfloat-equal
        -Wnon-virtual-dtor
        -Wold-style-cast
        -Woverloaded-virtual
        -Wredundant-decls
        -Wsign-conversion
        -Wsign-promo
    )
endif()

if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    add_compile_options(
        /W4
        /WX
    )
endif()

add_executable(Laboratory_Work_15 ${SOURCES})
