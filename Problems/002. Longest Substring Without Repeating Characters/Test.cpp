#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Longest Substring Without Repeating Characters")
{
    Solution s;

    SECTION("normal input") {
        CHECK( s.lengthOfLongestSubstring("abcabcbb") == 3);
        // The answer is "abc", with the length of 3.

        CHECK( s.lengthOfLongestSubstring("bbbbb") == 1);
        // The answer is "b", with the length of 1.

        CHECK( s.lengthOfLongestSubstring("pwwkew") == 3);
        // The answer is "wke", with the length of 3.
    }

    SECTION("input string is empty") {
        CHECK( s.lengthOfLongestSubstring("") == 0);
        // The answer is "", with the length of 0.
    }
}