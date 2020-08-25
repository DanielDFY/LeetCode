#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"


TEST_CASE("Move Zeroes")
{
	Solution s;
	
	SECTION("normal input") {
		vector<int> nums = { 0,1,0,3,12 };
		vector<int> ans = { 1,3,12,0,0 };

		s.moveZeroes(nums);
		CHECK(nums == ans);
	}
}