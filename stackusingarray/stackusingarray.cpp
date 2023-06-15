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
};