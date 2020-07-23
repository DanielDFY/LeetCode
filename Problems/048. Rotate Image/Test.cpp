#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Rotate Image")
{
    Solution s;

    SECTION("normal input") {
        vector<vector<int>> matrix{
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
        vector<vector<int>> ans{
            {7,4,1},
            {8,5,2},
            {9,6,3}
        };

        s.rotate(matrix);

        CHECK(matrix == ans);
    }
}