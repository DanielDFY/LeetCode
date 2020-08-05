#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Word Break")
{
	Solution s;
	
	SECTION("normal input") {
		string str1 = "leetcode";
        vector<string> wordDict1{ "leet", "code" };

		CHECK(s.wordBreak(str1, wordDict1) == true);

		string str2 = "applepenapple";
		vector<string> wordDict2{ "apple", "pen" };

		CHECK(s.wordBreak(str2, wordDict2) == true);

		string str3 = "catsandog";
		vector<string> wordDict3{ "cats", "dog", "sand", "and", "cat" };

		CHECK(s.wordBreak(str3, wordDict3) == false);
	}
}