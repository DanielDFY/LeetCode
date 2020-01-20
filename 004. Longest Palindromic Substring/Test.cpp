#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution.h"

TEST_CASE("Longest Palindromic Substring", "longestPalindrome") {
    Solution s;

    REQUIRE( s.longestPalindrome("babad") == "bab");
}