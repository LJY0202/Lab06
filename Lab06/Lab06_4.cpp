#include <iostream>
#include <cstring>
using namespace std;
class Person {
private:
	char name[20];
	int age;
	char address[20];

public:
	Person(char* _name, int _age, char* _address) {
		strcpy_s(name, _name);
		age = _age;
		strcpy_s(address, _address);
	}
	string getName() {
		return this->name;
	}
	string getAddress() {
		return this->address;
	}
	int getAge() {
		return this->age;
	}

	void info() {
		cout << "name: " << name << endl;
		cout << "age: " << age << endl;
		cout << "address: " << address << endl;
	}

};
class Student : public Person {
private:
	char studentID[10];
public:
	Student(char* _name, int _age, char* _address, char* _studentID) : Person(_name, _age, _address)
	{
		strcpy_s(studentID, _studentID);
	}
	string getStudentID() {
		return this->studentID;
	}
	void showStudentInfo() {
		cout << "Student Information" << endl;
		info();
		cout << "Student ID: " << studentID << endl;
	}
};

int main() {

	Student me((char*)"JungYoon Lee", 22, (char*)"Deajun", (char*)"201902733");
	me.showStudentInfo();
	return 0;
}


