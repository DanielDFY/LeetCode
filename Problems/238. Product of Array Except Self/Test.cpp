#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"


TEST_CASE("Product of Array Except Self")
{
	Solution s;
	
	SECTION("normal input") {
		vector<int> nums = { 1,2,3,4 };
		vector<int> ans = { 24,12,8,6 };

		CHECK(s.productExceptSelf(nums) == ans);
	}
}