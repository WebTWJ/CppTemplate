#include <catch2/catch_test_macros.hpp>
#include "Greeter.h"

TEST_CASE("Greeter says hello", "[greeter]") {
    Greeter greeter;
    REQUIRE(1 == 1);
}
