#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Maximal Square")
{
	Solution s;
	
	SECTION("normal input") {
		vector<vector<char>> matrix = {
			{'1', '0', '1', '0', '0'},
			{'1', '0', '1', '1', '1'},
			{'1', '1', '1', '1', '1'},
			{'1', '0', '0', '1', '0'},
		};
		CHECK(s.maximalSquare(matrix) == 4);
	}
}