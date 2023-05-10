#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>
#include "List.h"
#include "ListNode.h"



TEST_CASE("Test list", "[list]") 
{
	List myList;

	SECTION("List empty or not empty")
	{
		INFO("Test Empty()");
		CHECK(myList.Empty() == true);
		myList.PushFront(1);
		CHECK(myList.Empty() == false);
	}

	SECTION("List size")
	{
		INFO("Test Size()");
		CHECK(myList.Size() == 0);
		myList.PushFront(1);
		CHECK(myList.Size() == 1);
	}

	SECTION("List clear")
	{
		INFO("Test Clear()");
		myList.PushFront(1);
		myList.Clear();
		CHECK(myList.Empty());

	}

/*  Empty.
	Size.
	Clear.
*/


}
int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
