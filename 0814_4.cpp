#include <iostream>

using namespace std;

int main_4() {
	// char : 작은 문자형
	int a = 77;
	char b = a;

	char c[] = { 'a', 'b', 'c', '\0'};
	// null 문자 '\0'
	// "" >> 명시적으로 null 문자가 포함

	cout << b << endl;
	cout << c << endl;

	bool d = 0;
	bool e = 1;

	cout << d << endl;
	cout << e << endl;
	
	return 0;
}