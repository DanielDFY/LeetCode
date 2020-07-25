#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Merge Intervals")
{
    Solution s;

    SECTION("normal input") {
        vector<vector<int>> intervals1{ {1,3},{2,6},{8,10},{15,18} };
        vector<vector<int>> ans1{ {1,6},{8,10},{15,18} };

        CHECK(s.merge(intervals1) == ans1);

        vector<vector<int>> intervals2{ {1,4},{4,5} };
        vector<vector<int>> ans2{ {1,5} };

        CHECK(s.merge(intervals2) == ans2);
    }
}