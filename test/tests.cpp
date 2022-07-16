#include <catch2/catch_test_macros.hpp>

#include "sum.hpp"

unsigned int Factorial(unsigned int number)// NOLINT(misc-no-recursion)
{
  return number <= 1 ? number : Factorial(number - 1) * number;
}

TEST_CASE("Factorials are computed", "[factorial]")
{
  REQUIRE(Factorial(1) == 1);
  REQUIRE(Factorial(2) == 2);
  REQUIRE(Factorial(3) == 6);
  REQUIRE(Factorial(10) == 3628800);
}

TEST_CASE("SumsCalculated", "[sum]")
{
  REQUIRE(sum_int(1, 2) == 3);
  REQUIRE(sum_int(2, 2) == 4);
  REQUIRE(sum_int(2, 3) == 5);
}

TEST_CASE("SomeSumsAreWrong", "[dumsum]")
{
  CHECK(sum_int(3, 4) == 7);
  CHECK(sum_int(4, 4) == 7);
  CHECK(sum_int(4, 3) == 7);
}
