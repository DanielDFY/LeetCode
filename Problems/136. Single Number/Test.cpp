#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"


TEST_CASE("Single Number")
{
	Solution s;
	
	SECTION("normal input") {
		vector<int> input1{ 2,2,1 };
		CHECK(s.singleNumber(input1) == 1);

		vector<int> input2{ 4,1,2,1,2 };
		CHECK(s.singleNumber(input2) == 4);
	}
}