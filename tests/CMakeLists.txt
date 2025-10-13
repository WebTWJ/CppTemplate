file(GLOB TEST_SOURCES "*.cpp")

add_executable(runTests ${TEST_SOURCES})

target_link_libraries(runTests PRIVATE MyProjectLib Catch2::Catch2WithMain)

include(CTest)
add_test(NAME MyProjectTests COMMAND runTests)
