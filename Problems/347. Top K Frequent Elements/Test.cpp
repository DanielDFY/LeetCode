#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"


TEST_CASE("Top K Frequent Elements")
{
	Solution s;
	
	SECTION("heap") {
		vector<int> nums1 = { 1,1,1,2,2,3 };
		int k1 = 2;
		vector<int> ans1 = { 1, 2 };
		CHECK(s.topKFrequent(nums1, k1) == ans1);
		
		vector<int> nums2 = { 1 };
		int k2 = 1;
		vector<int> ans2 = { 1 };
		CHECK(s.topKFrequent(nums2, k2) == ans2);
	}

	SECTION("selection") {
		vector<int> nums1 = { 1,1,1,2,2,3 };
		int k1 = 2;
		vector<int> ans1 = { 1, 2 };
		CHECK(s.topKFrequentSelect(nums1, k1) == ans1);

		vector<int> nums2 = { 1 };
		int k2 = 1;
		vector<int> ans2 = { 1 };
		CHECK(s.topKFrequentSelect(nums2, k2) == ans2);
	}
}