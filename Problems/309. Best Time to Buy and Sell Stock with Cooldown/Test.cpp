#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"


TEST_CASE("Coin Change")
{
	Solution s;
	
	SECTION("normal input") {
		vector<int> coins = { 1, 2, 5 };
		int amount = 11;
		CHECK(s.coinChange(coins, amount) == 3);
	}

	SECTION("no valid combination") {
		vector<int> coins = { 2 };
		int amount = 3;
		CHECK(s.coinChange(coins, amount) == -1);
	}
}