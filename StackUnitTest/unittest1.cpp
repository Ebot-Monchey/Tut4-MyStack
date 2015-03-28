#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace StackUnitTest
{		
	TEST_CLASS(TestStack)
	{
	public:
		TEST_METHOD(PushPopWorks) {
			// Tests whether the item we pushed is the same one we get back when we pop
		}

		TEST_METHOD(PopEmpty) {
			// Tests what happens when you pop an empty stack.. should return a null pointer
		}

		TEST_METHOD(PushFull) {
			// Tests what happens when you push to a full stack.. should return false to say not pushed
		}

		TEST_METHOD(PeekWorks) {
			// Tests whether peek works
		}

		TEST_METHOD(IsFullWorks) {
			// Tests whether isFull works
		}

		TEST_METHOD(IsEmptyWorks) {
			// Tests whether isEmpty works
		}
	};
}