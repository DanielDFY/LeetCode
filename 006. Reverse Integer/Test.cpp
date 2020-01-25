#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution.h"

TEST_CASE("Reverse Integer", "reverseInteger") {
    Solution s;

    REQUIRE(s.reverse(123) == 321);
    REQUIRE(s.reverse(-123) == -321);
    REQUIRE(s.reverse(120) == 21);
}