#include <iostream>
using namespace std;

class A {
	int i;

public:
	A() {
		i = 5;
		cout << i << " (begin) ";
	}
	void operator ++(int) {
		i++;
		cout << i << " (result a++ ) ";
	}
	void operator ++() {
		++i;
		cout << i << " (result ++a) ";
	}

};

int main() {
	A a;
	a++;
	++a;
	return 0;
}
