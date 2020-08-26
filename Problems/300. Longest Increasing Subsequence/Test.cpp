#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"


TEST_CASE("Longest Increasing Subsequence")
{
	Solution s;
	
	SECTION("normal input") {
		vector<int> nums = { 10,9,2,5,3,7,101,18 };
		CHECK(s.lengthOfLIS(nums) == 4);
	}
}