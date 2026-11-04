cmake_minimum_required(VERSION 3.16)

project(h1_teht LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h1_teht main.cpp)

include(GNUInstallDirs)
install(TARGETS h1_teht
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
