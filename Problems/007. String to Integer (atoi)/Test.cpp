#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("String to Integer (atoi)") {
    Solution s;

    SECTION("normal input") {
        CHECK(s.myAtoi("42") == 42);
    }

    SECTION("input start with spaces") {
        CHECK(s.myAtoi("   -42") == -42);
    }

    SECTION("input followed by characters") {
        CHECK(s.myAtoi("4193 with words") == 4193);
    }

    SECTION("input start with characters") {
        CHECK(s.myAtoi("words and 987") == 0);
    }

    SECTION("overflow input") {
        REQUIRE(s.myAtoi("-91283472332") == -2147483648);
    }
}