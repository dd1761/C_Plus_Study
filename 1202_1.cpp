#include <iostream>

using namespace std;

struct MyStruct {
	string name;
	int age;
};

void display(MyStruct&);

int main() {
	MyStruct DongBeen = {
		"DongBeen",
		26
	};

	display(DongBeen);
	return 0;

};

void display(MyStruct& temp) {
	cout << "Name: " << temp.name << endl;
	cout << "Age: " << temp.age << endl;
}