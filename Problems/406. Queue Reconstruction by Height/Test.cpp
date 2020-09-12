#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"


TEST_CASE("Queue Reconstruction by Height")
{
	Solution s;
	
	SECTION("normal input") {
		vector<vector<int>> people = {
			{7, 0},
			{4, 4},
			{7, 1},
			{5, 0},
			{6, 1},
			{5, 2}
		};

		vector<vector<int>> ans = {
			{5, 0},
			{7, 0},
			{5, 2},
			{6, 1},
			{4, 4},
			{7, 1}
		};
		
		CHECK(s.reconstructQueue(people) == ans);
	}
}