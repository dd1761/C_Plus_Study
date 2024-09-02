#include <iostream>

using namespace std;

void countDown(int n);

int main_0902_4() {
	//재귀호출 : c++에서 함수는 자기 자신을 호출할 수 있다.

	//void recurs(argumentList) {
	//	//Code#1
	//	if (condition) {
	//		recus(argumentList);
	//	}
	//	//Code#2
	//}
	countDown(5);

	return 0;
}

void countDown(int n) {
	cout << "카운트 다운... " << n << endl;
	if (n > 0) {
		countDown(n - 1);
	}
	cout << n << "번째 재귀함수" << endl;
}