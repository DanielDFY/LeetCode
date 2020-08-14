#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Number of Islands")
{
	Solution s;
	
	SECTION("normal input") {
		vector<vector<char>> grid1 = {
			{'1','1','1','1','0'},
			{'1','1','0','1','0'},
			{'1','1','0','0','0'},
			{'0','0','0','0','0'},
		};
		CHECK(s.numIslands(grid1) == 1);

		vector<vector<char>> grid2 = {
			{'1','1','0','0','0'},
			{'1','1','0','0','0'},
			{'0','0','1','0','0'},
			{'0','0','0','1','1'},
		};
		CHECK(s.numIslands(grid2) == 3);
	}
}