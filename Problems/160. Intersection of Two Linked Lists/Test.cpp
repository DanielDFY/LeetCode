#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Intersection of Two Linked Lists")
{
	Solution s;
	
	SECTION("has intersection") {
		ListNode a1(4);
		ListNode a2(1);

		ListNode b1(5);
		ListNode b2(6);
		ListNode b3(1);

		ListNode c1(8);
		ListNode c2(4);
		ListNode c3(5);

		a1.next = &a2;
		a2.next = &c1;

		b1.next = &b2;
		b2.next = &b3;
		b3.next = &c1;

		c1.next = &c2;
		c2.next = &c3;

		CHECK(s.getIntersectionNode(&a1, &b1) == &c1);
	}

	SECTION("no intersection") {
		ListNode a1(2);
		ListNode a2(4);
		ListNode a3(6);

		ListNode b1(1);
		ListNode b2(5);


		a1.next = &a2;
		a2.next = &a3;

		b1.next = &b2;

		CHECK(s.getIntersectionNode(&a1, &b1) == nullptr);
	}
}