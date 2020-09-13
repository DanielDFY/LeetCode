#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"


TEST_CASE("Queue Reconstruction by Height") {
	Solution s;
	
	SECTION("normal input") {
	    vector<int> nums = {1, 5, 11, 5};
		CHECK(s.canPartition(nums) == true);
	}
}