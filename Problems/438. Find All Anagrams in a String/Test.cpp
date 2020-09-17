#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Find All Anagrams in a String") {
	Solution s;
	
	SECTION("normal input") {
		CHECK(s.findAnagrams("cbaebabacd", "abc") == vector<int>{0, 6});

        CHECK(s.findAnagrams("abab", "ab") == vector<int>{0, 1, 2});
	}
}