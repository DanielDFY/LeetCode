#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("LRU Cache")
{
	SECTION("normal input") {
		LRUCache lruCache(2);

		lruCache.put(1, 1);
		lruCache.put(2, 2);
		CHECK(lruCache.get(1) == 1);    // returns 1
		lruCache.put(3, 3);		// evicts key 2
		CHECK(lruCache.get(2) == -1);   // returns -1 (not found)
		lruCache.put(4, 4);		// evicts key 1
		CHECK(lruCache.get(1) == -1);	// returns -1 (not found)
		CHECK(lruCache.get(3) == 3);		// returns 3
		CHECK(lruCache.get(4) == 4);		// returns 4
	}
}