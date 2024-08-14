#include <iostream>

using namespace std;

int main() {

	// 1. 변수란? 변할 수 있는 수
	// 2. 상수 : 변할 수 없는 수

	/*
	 1. 변수의 자료형
	 2. 변수의 이름
	 3. 변수가 어디에 저장되는가? (메모리 영역)
	*/

	int a; // int 자료형의 a 라는 변수

	a = 7;

	int b = 3; // 선언과 동시에 값을 지정하는 것. 초기화

	cout << "a 의 값은 : " << a << " b의 값은 : " << b << endl;

	return 0;
}