#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("ZigZag Conversion", "zigzagConversion") {
    Solution s;

    SECTION("normal input") {
        CHECK(s.convert("PAYPALISHIRING", 3) == "PAHNAPLSIIGYIR");
        CHECK(s.convert("PAYPALISHIRING", 4) == "PINALSIGYAHRPI");
    }

    SECTION("empty input") {
        CHECK(s.convert("", 2) == "");
    }

    SECTION("number of rows larger than string length") {
        CHECK(s.convert("PAYPALISHIRING", 15) == "PAYPALISHIRING");
    }
}