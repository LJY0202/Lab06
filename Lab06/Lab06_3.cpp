#include <iostream>
#include <exception>
using namespace std;

class A {
public:
	int i;
public:
	A() {
		cout << "Constructor()" << endl;
	}
	~A() {
		cout << "Destructor()" << endl;
	}
};

int main() {
	try {
		A a;
		throw std::runtime_error("Catch 10");
	}
	catch (std::runtime_error e) {
		std::cout << e.what();
	}
	return 0;
}


