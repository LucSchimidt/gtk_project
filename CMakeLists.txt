cmake_minimum_required(VERSION 3.10)
project(MeuProjetoGTK)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})
add_definitions(${GTK3_CFLAGS_OTHER})

set(SOURCE_FILES main.c
        interfaces/secondary.ui)

add_executable(MeuProjetoGTK ${SOURCE_FILES})
target_link_libraries(MeuProjetoGTK ${GTK3_LIBRARIES})
