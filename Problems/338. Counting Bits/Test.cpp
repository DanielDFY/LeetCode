#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"


TEST_CASE("Counting Bits")
{
	Solution s;
	
	SECTION("normal input") {
		CHECK(s.countBits(2) == vector<int>{0, 1, 1});
		CHECK(s.countBits(5) == vector<int>{0, 1, 1, 2, 1, 2});
	}
}