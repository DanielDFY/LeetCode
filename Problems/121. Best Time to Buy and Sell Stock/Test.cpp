#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"


TEST_CASE("Best Time to Buy and Sell Stock")
{
	Solution s;
	
	SECTION("normal input") {
		vector<int> input1{ 7,1,5,3,6,4 };
		CHECK(s.maxProfit(input1) == 5);

		vector<int> input2{ 7,6,4,3,1 };
		CHECK(s.maxProfit(input2) == 0);
	}

	SECTION("empty input") {
		vector<int> input{ };
		CHECK(s.maxProfit(input) == 0);
	}
}