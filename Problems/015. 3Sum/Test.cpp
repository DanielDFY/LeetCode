#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("3Sum")
{
    Solution s;

    SECTION("normal input") {
        std::vector<int> v1{ -1, 0, 1, 2, -1, -4 };
        std::vector<std::vector<int>> ans1{ {-1, -1, 2}, {-1, 0, 1} };
        CHECK( (s.threeSum(v1) == ans1) );

        std::vector<int> v2{0, 0, 0, 0};
        std::vector<std::vector<int>> ans2{ {0, 0, 0} };
        CHECK( (s.threeSum(v2) == ans2) );

        std::vector<int> v3{ 1, 1, 1, 1 };
        std::vector<std::vector<int>> ans3;
        CHECK((s.threeSum(v3) == ans3));
    }

    SECTION("empty vector input") {
        std::vector<int> v;
        std::vector<std::vector<int>> ans;
        CHECK( (s.threeSum(v) == ans));
    }
}