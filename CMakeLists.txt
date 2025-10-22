cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(CPPTemplate)

include(FetchContent)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.5.2
)
FetchContent_MakeAvailable(Catch2)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(main
    src/main.cpp
    src/Greeter.cpp
)

enable_testing()

file(GLOB TEST_SOURCES "tests/*.cpp")

add_executable(runTests ${TEST_SOURCES})

target_link_libraries(runTests PRIVATE Catch2::Catch2WithMain)

add_test(NAME MyProjectTests COMMAND runTests)
