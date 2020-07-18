#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("3Sum")
{
    Solution s;

    SECTION("normal input") {
        std::string digits("23");
        std::vector<string> ans{ "ad","bd","cd","ae","be","ce","af","bf","cf" };
        CHECK( (s.letterCombinations(digits) == ans) );
    }

    SECTION("empty vector input") {
        std::string digits;
        std::vector<string> ans;
        CHECK( (s.letterCombinations(digits) == ans));
    }
}