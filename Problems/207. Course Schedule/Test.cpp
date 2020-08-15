#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Course Schedule")
{
	Solution s;
	
	SECTION("normal input") {
		int numCourses1 = 2;
		vector<vector<int>> prerequisites1 = { {1,0} };
		
		CHECK(s.canFinish(numCourses1, prerequisites1) == true);

		int numCourses2 = 2;
		vector<vector<int>> prerequisites2 = { {1,0}, {0,1} };

		CHECK(s.canFinish(numCourses2, prerequisites2) == false);
	}
}