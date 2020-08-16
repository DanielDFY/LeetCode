#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Implement Trie (Prefix Tree)")
{
	SECTION("normal input") {
		Trie trie;

		trie.insert("apple");
		CHECK(trie.search("apple") == true);   // returns true
		CHECK(trie.search("app") == false);     // returns false
		CHECK(trie.startsWith("app") == true); // returns true
		trie.insert("app");
		CHECK(trie.search("app") == true);     // returns true
	}
}