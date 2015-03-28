#include "MyStack.h"

/*
* Creates a stack with a maximum of n elements.
*/
MyStack::MyStack(int max) {
	this->max = max;
	n = 0;
	head = nullptr;
}

/*
* Deletes all created objects.
*/
MyStack::~MyStack() {
	while (head != nullptr) {
		IntObject *newHead = head->link;
		delete head;
		head = newHead;
	}
}

/*
* Pushes an integer onto the stack. Returns true if it was placed on the stack and false otherwise.
*/
bool MyStack::push(int value) {
	if (n == max) {
		return false;
	}
	else {
		IntObject *val = new IntObject;
		val->value = value;
		val->link = head;
		head = val;
		n++;
		return true;
	}
}

/*
* Removes an integer from the stack and throws a StackException if it is empty.
*/
int MyStack::pop() {
	if (n == 0) {
		StackException error;
		error.error = "Stack is empty";
		throw error;
	}
	else {
		IntObject *newHead = head->link;
		int val = head->value;
		delete head;
		head = newHead;
		n--;
		return val;
	}
}

/*
* Retrieves an integer from the stack without removing it and throws a StackException if it is empty.
*/
int MyStack::peek() {
	if (n == 0) {
		StackException error;
		error.error = "Stack is empty";
		throw error;
	}
	else {
		return head->value;
	}
}

/*
* Whether the stack is full or not.
*/
bool MyStack::isFull() {
	return n == max;
}

/*
* Whether the stack is empty or not.
*/
bool MyStack::isEmpty() {
	return n == 0;
}