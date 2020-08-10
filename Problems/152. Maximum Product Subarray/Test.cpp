#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Maximum Product Subarray")
{
	Solution s;

	SECTION("normal input") {
		vector<int> v{ 2, 3, -2, 4 };

		CHECK(s.maxProduct(v) == 6);
	}

	SECTION("input with zero element") {
		vector<int> v{ -2, 0, -1 };

		CHECK(s.maxProduct(v) == 0);
	}
}