#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Valid Parentheses")
{
    Solution s;

    SECTION("normal input") {
        string str1 = "()";
        CHECK(s.isValid(str1) == true);

        string str2 = "(){}";
        CHECK(s.isValid(str2) == true);

        string str3 = "(]";
        CHECK(s.isValid(str3) == false);
    }

    SECTION("empty input") {
        string str = "";
        CHECK(s.isValid(str) == true);

    }

    SECTION("parentheses are not in pairs") {
        string str1 = "({}";
        CHECK(s.isValid(str1) == false);

        string str2 = "({})]";
        CHECK(s.isValid(str2) == false);

        string str3 = "]";
        CHECK(s.isValid(str3) == false);

        string str4 = "(";
        CHECK(s.isValid(str4) == false);

    }
}