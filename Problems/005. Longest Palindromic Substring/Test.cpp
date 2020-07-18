#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Longest Palindromic Substring") {
    Solution s;

    SECTION("normal input") {
        SECTION("even length") {
            string result = s.longestPalindrome("babad");
            CHECK(((result == "bab") || (result == "aba")));
        }

        SECTION("odd length") {
            string result = s.longestPalindrome("cbbaa");
            CHECK(((result == "bb") || (result == "aa")));
        }

        SECTION("all chars are unique") {
            string result = s.longestPalindrome("abcd");
            CHECK(((result == "a") || (result == "b") || (result == "c") || (result == "d")));
        }
    }

    SECTION("empty string") {
        string result = s.longestPalindrome("");
        CHECK(result == "");
    }
}