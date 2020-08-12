#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Majority Element")
{
	Solution s;
	
	SECTION("normal input") {
		vector<int> v1 = { 3,2,3 };
		CHECK(s.majorityElement(v1) == 3);

		vector<int> v2 = { 2,2,1,1,1,2,2 };
		CHECK(s.majorityElement(v2) == 2);
	}
}