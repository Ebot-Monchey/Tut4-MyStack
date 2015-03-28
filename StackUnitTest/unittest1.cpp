#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\StackDLL\MyStack.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace StackUnitTest
{		
	TEST_CLASS(TestStack)
	{
	public:
		TEST_METHOD(PushPopWorks) {
			// Tests whether the item we pushed is the same one we get back when we pop
			MyStack stack(1);
			stack.push(1);
			int ret = stack.pop();
			Assert::AreEqual(ret, 1);
		} 

		TEST_METHOD(PopEmpty) {
			// Tests what happens when you pop an empty stack.. should return a null pointer
			try {
				MyStack stack(1);
				stack.pop();
				Assert::Fail();
			}
			catch (StackException ex) {
				// Test passed successfully
			}
		}

		TEST_METHOD(PushFull) {
			// Tests what happens when you push to a full stack.. should return false to say not pushed
			MyStack stack(1);
			stack.push(1);
			bool res = stack.push(2);
			Assert::AreEqual(res, false);
		}

		TEST_METHOD(PeekWorks) {
			// Tests whether peek works
			MyStack stack(1);
			stack.push(1);
			int res = stack.peek();
			Assert::AreEqual(res, 1);		// Value is the one we inserted
			Assert::IsFalse(stack.push(2));	// Peek did not remove the item so must be full
		}

		TEST_METHOD(IsFullWorks) {
			// Tests whether isFull works
			MyStack stack(1);
			stack.push(1);
			Assert::IsTrue(stack.isFull());
		}

		TEST_METHOD(IsEmptyWorks) {
			// Tests whether isEmpty works
			MyStack stack(1);
			Assert::IsTrue(stack.isEmpty());
		}
	};
}