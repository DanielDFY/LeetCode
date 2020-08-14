#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("House Robber")
{
	Solution s;
	
	SECTION("normal input") {
		vector<int> v1 = { 1,2,3,1 };
		CHECK(s.rob(v1) == 4);

		vector<int> v2 = { 2,7,9,3,1 };
		CHECK(s.rob(v2) == 12);
	}
}