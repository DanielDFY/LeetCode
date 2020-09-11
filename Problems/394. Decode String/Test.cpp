#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"


TEST_CASE("Decode String")
{
	Solution s;
	
	SECTION("heap") {
		CHECK(s.decodeString("3[a]2[bc]") == "aaabcbc");
		
		CHECK(s.decodeString("3[a2[c]]") == "accaccacc");

		CHECK(s.decodeString("2[abc]3[cd]ef") == "abcabccdcdcdef");

		CHECK(s.decodeString("abc3[cd]xyz") == "abccdcdcdxyz");
	}
}