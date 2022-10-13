#include <iostream>
using namespace std;

class A {
	int i;

public:
	A() {
		i = 5;
		cout << i << " (초기)";
	}
	void operator ++(int) {
		i++;
		cout << i << " (a++ 결과) ";
	}
	void operator ++() {
		++i;
		cout << i << " (++a 결과) ";
	}

};

int main() {
	A a;
	a++;
	++a;
	return 0;
}
