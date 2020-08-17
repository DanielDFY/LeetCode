#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Kth Largest Element in an Array")
{
	Solution s;
	
	SECTION("normal input") {
		vector<int> v1 = { 3,2,1,5,6,4 };
		CHECK(s.findKthLargest(v1, 2) == 5);

		vector<int> v = { 3,2,3,1,2,4,5,5,6 };
		CHECK(s.findKthLargest(v, 4) == 4);
	}
}