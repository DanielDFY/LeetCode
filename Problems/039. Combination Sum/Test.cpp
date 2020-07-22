#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Combination Sum")
{
    Solution s;

    SECTION("normal input") {
        vector<int> candidates1{ 2,3,6,7 };
		int target1 = 7;
        vector<vector<int>> ans1{ {2,2,3},{7} };

        CHECK(s.combinationSum(candidates1, target1) == ans1);

        vector<int> candidates2{ 2,3,5 };
        int target2 = 8;
        vector<vector<int>> ans2{ {2,2,2,2},{2,3,3},{3,5} };

        CHECK(s.combinationSum(candidates2, target2) == ans2);
    }
}