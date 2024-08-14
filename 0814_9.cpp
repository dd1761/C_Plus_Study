#include <iostream>

using namespace std;

int main_9() {

	// 공용체(union)
	// 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음.

	union MyUnion {
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;
	
	test.intVal = 3;
	test.floatVal = 33;
	test.floatVal = 3.33;

	cout << test.intVal << endl;
	cout << test.floatVal << endl;
	cout << test.floatVal << endl;

	// 열거체 (enum)
	// 기호 상수를 만드는 것에 대한 또다른 방법

	enum spectrum {
		red, orange, yellow, green, blue, violet, indigo, ultraviolet
	};

	/*
	1. spectrum을 새로운 데이터형 이름으로 만듭니다.
	2. red orange .. 0에서 7까지 정수 값을 각각 나타내는 기호 상수로 만듭니다.
	*/

	spectrum a = orange;
	cout << a << endl;

	int b;
	b = blue;
	b = blue + 3;

	cout << b << endl;

	return 0;
}