#include <iostream>
using namespace std;

class A {
	int i;

public:
	A() {
		i = 5;
		cout << i << " (�ʱ�)";
	}
	void operator ++(int) {
		i++;
		cout << i << " (a++ ���) ";
	}
	void operator ++() {
		++i;
		cout << i << " (++a ���) ";
	}

};

int main() {
	A a;
	a++;
	++a;
	return 0;
}
