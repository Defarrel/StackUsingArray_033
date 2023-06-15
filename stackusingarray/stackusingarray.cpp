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

	void pop() {
		if (empty()) {
			cout << "\nstack is empty. cannot pop" << endl;
			return;
		}
		cout << "\nThe popped element is: " << stack_array[top] << endl;
		top--;
	}

	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nstack is empty" << endl;
		}
		else {
			for (int temp = top; temp >= 0; temp--) {
				cout << stack_array[temp] << endl;
			}
		}
	}
};

int main() {
	stack s;

	while (true) {
		cout << endl;
		cout << "\n=====Stack Menu=====\n";
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. Display\n";
		cout << "4. Exit\n";
		cout << "\nEnter your choice: ";
		string input;
		getline(cin, input);
		char ch = (input.empty() ? '0' : input[0]);
		switch (ch) {
		case '1': {
			cout << "\nInput your elememt: ";
			string element;
			getline(cin, element);
			s.push(element);
			break;
		}
		case '2': {
			if (s.empty()) {
				cout << "\nStack is empty" << endl;
				break;
			}
			s.pop();
			break;
		}
		case '3': {
			s.display();
			break;
		}
		case '4': {
			return 0;
		default:
			cout << "\nInvalid choice" << endl;
			break;
		}
		}
	}
}