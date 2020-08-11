#define CATCH_CONFIG_MAIN
#include "../../Utils/Cacth/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Min Stack")
{
	SECTION("normal input") {
		MinStack ms;
		ms.push(-2);
		ms.push(0);
		ms.push(-3);
		CHECK(ms.getMin() == -3);
		ms.pop();
		CHECK(ms.top() == 0);
		CHECK(ms.getMin() == -2);
	}
}