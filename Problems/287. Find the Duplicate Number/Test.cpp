#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"


TEST_CASE("Find the Duplicate Number")
{
	Solution s;
	
	SECTION("normal input") {
		vector<int> nums1 = { 1,3,4,2,2 };
		CHECK(s.findDuplicate(nums1) == 2);

		vector<int> nums2 = { 3,1,3,4,2 };
		CHECK(s.findDuplicate(nums2) == 3);
	}
}