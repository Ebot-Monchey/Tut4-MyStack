#ifndef MYSTACK_H
#define MYSTACK_H
#include <string>

#define EXPORTED _declspec(dllexport)

/*
* Struct thrown when a stack exception occurs
*/
EXPORTED typedef struct StackException {
	std::string error;
} StackException;

class EXPORTED MyStack {
private:
	int n;			// Number of items on the stack
	int max;		// Maximum number of items that can be on the stack
	typedef struct IntObject {
		int value;
		IntObject *link;
	} IntObject;
	IntObject *head;	// The item on the top of the stack

public:
	MyStack(int max);
	~MyStack();
	bool push(int value);
	int pop();
	int peek();
	bool isFull();
	bool isEmpty();
};

#endif