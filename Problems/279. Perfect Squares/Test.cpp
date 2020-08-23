#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"


TEST_CASE("Perfect Squares")
{
	Solution s;
	
	SECTION("normal input") {
		CHECK(s.numSquares(12) == 3);
		CHECK(s.numSquares(13) == 2);
	}
}