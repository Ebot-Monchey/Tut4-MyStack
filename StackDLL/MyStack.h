#ifndef MYSTACK_H
#define MYSTACK_H
#include <string>

#define EXPORTED _declspec(dllexport)

EXPORTED typedef struct IntObject {
	int value;
	IntObject *link;
} IntObject;

/*
* Struct thrown when a stack exception occurs
*/
EXPORTED typedef struct StackException {
	std::string error;
};

EXPORTED class MyStack {
private:
	int n;			// Number of items on the stack
	int max;		// Maximum number of items that can be on the stack
	IntObject head;	// The item on thew top of the stack

public:
	MyStack(int max);
	~MyStack();
	bool push(int);
	int pop();
	int peek();
	bool isFull();
	bool isEmpty();
};

#endif