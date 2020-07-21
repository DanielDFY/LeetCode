#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Generate Parentheses")
{
    Solution s;

    SECTION("normal input") {
        int n = 3;

        std::vector<string> ans { 
            "((()))",
			"(()())",
			"(())()",
			"()(())",
			"()()()"
        };

        CHECK(s.generateParenthesis(n) == ans);
    }
}