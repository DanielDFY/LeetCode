#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Group Anagrams")
{
    Solution s;

    SECTION("normal input") {
        vector<string> strs{ "eat", "tea", "tan", "ate", "nat", "bat" };
        vector<vector<string>> ans{
            { "bat" }, { "tan", "nat" }, { "eat", "tea", "ate" }
        };

        CHECK(s.groupAnagrams(strs) == ans);
    }
}