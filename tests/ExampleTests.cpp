#include "Greeter.hpp"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Greeter says hello", "[greeter]") {
  Greeter greeter;
  REQUIRE(1 == 1);
}
