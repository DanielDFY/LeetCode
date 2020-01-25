#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution.h"

TEST_CASE("ZigZag Conversion", "zigzagConversion") {
    Solution s;

    REQUIRE(s.convert("PAYPALISHIRING", 3) == "PAHNAPLSIIGYIR");
    REQUIRE(s.convert("PAYPALISHIRING", 4) == "PINALSIGYAHRPI");
}