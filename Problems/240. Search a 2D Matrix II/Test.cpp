#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"


TEST_CASE("Search a 2D Matrix II")
{
	Solution s;
	
	SECTION("normal input") {
		vector<vector<int>> matrix{
			{1, 4, 7, 11, 15},
			{2, 5, 8, 12, 19},
			{3, 6, 9, 16, 22},
			{10, 13, 14, 17, 24},
			{18, 21, 23, 26, 30}
		};

		CHECK(s.searchMatrix(matrix, 5) == true);
		CHECK(s.searchMatrix(matrix, 20) == false);
	}
}