#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Longest Palindromic Substring", "longestPalindrome") {
    Solution s;

    REQUIRE( s.longestPalindrome("babad") == "bab");
}