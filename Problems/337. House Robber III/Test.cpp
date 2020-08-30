#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"


TEST_CASE("Best Time to Buy and Sell Stock with Cooldown")
{
	Solution s;
	
	SECTION("normal input") {
		vector<int> prices = { 1,2,3,0,2 };
		CHECK(s.maxProfit(prices) == 3);
	}
}