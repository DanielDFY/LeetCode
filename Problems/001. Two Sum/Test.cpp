#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Two Sum")
{
    Solution s;

    SECTION("normal input") {
        std::vector<int> v1{2, 7, 11, 15};
        CHECK( (s.twoSum(v1, 9) == std::vector<int>{0, 1}) );

        std::vector<int> v2{0, 1, 2, 0};
        CHECK( (s.twoSum(v2, 0) == std::vector<int>{0, 3}) );

        std::vector<int> v3{-3, -4, 3, 90};
        CHECK( (s.twoSum(v3, -1) == std::vector<int>{1, 2}) );
    }

    SECTION("empty vector input") {
        std::vector<int> v;
        CHECK( (s.twoSum(v, 1) == std::vector<int>{-1, -1}) );
    }

    SECTION("no valid pair") {
        std::vector<int> v{1, 2, 3, 4};
        CHECK( (s.twoSum(v, 0) == std::vector<int>{-1, -1}) );
    }
}