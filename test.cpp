#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE ("Half calculations are correct","[return_half]"){
  REQUIRE(return_half(2) == 1);
  REQUIRE(return_half(6) == 3);
  REQUIRE(return_half(10) == 5);
  REQUIRE(return_half(20) == 10);
}
