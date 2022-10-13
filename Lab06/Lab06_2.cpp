#include <iostream>
#include <exception>
using namespace std;

class CustomException : public std::exception {
public:
	const char* what() { return "number is smaller than 0"; }
};

class Eg0 {
private:
	int beq;
public:
	Eg0() {}
	void resize(int i) {
		if (i < 0) {
			throw CustomException();
		}
		beq = i;
	}
};

int main() {
	try {
		Eg0 b;
		b.resize(-100);
	}
	catch (CustomException& e) {
		cout << "My exception is ";
		cout << e.what() << endl;
	}
	return 0;
}

