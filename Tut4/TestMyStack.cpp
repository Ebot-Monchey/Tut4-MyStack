#include <iostream>
#include "MyStack.h"

using namespace std;

int main() {
	MyStack stack(10);
	for (int i = 0; i < 10; i++) {
		stack.push(i);
	}
	while (!stack.isEmpty()) {
		cout << stack.pop() << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}