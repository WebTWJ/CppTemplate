cmake_minimum_required(VERSION 3.10)

project(CPPTemplate)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.5.2
)
FetchContent_MakeAvailable(Catch2)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_library(MyProjectLib ${SOURCES})

add_executable(main src/main.cpp)

target_link_libraries(main PRIVATE MyProjectLib)

enable_testing()

add_subdirectory(tests)
