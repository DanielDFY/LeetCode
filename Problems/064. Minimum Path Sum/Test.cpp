#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Minimum Path Sum")
{
    Solution s;

    SECTION("normal input") {
        vector<vector<int>> grid{
            {1,3,1},
            {1,5,1},
            {4,2,1}
        };
    	
        CHECK(s.minPathSum(grid) ==7);
    }
}