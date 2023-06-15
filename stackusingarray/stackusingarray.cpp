#include <iostream>
#include <string>
using namespace std;

class stack {
private:
	string stack_array[5];
	int top;
public:
	stack() {
		top = -1;
	}

	string push(string element) {
		if (top == 4) {
			cout << "stack full" << endl;
			return "";
		}

		top++;
		stack_array[top] = element;

		cout << endl;
		cout << element << "ditambahkan (pushed)" << endl;

		return element;
	}

	bool empty() {
		return (top == -1);
	}
};