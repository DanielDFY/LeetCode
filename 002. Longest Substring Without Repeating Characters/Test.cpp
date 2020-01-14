#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution.h"

TEST_CASE("Add Two Numbers", "addTwoNumbers")
{
    Solution s;

    REQUIRE( s.lengthOfLongestSubstring("abcabcbb") == 3);
    // The answer is "abc", with the length of 3.

    REQUIRE( s.lengthOfLongestSubstring("bbbbb") == 1);
    // The answer is "b", with the length of 1.

    REQUIRE( s.lengthOfLongestSubstring("pwwkew") == 3);
    // The answer is "wke", with the length of 3.
}