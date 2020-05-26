#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Reverse Integer") {
    Solution s;

    SECTION("normal input") {
        CHECK(s.reverse(123) == 321);
    }

    SECTION("negative input") {
        CHECK(s.reverse(-123) == -321);
    }

    SECTION("input with 0 as last digit") {
        CHECK(s.reverse(120) == 21);
    }
}