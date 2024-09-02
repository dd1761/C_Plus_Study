#include <iostream>

using namespace std;

void helloCPP(int, int);

int main_0902_1() {

	int times, count;
	cout << "정수를 입력하세요.\n";
	cin >> times;

	cout << "c++을 입력 할 횟수를 입력하세요.\n";
	cin >> count;

	helloCPP(times, count);
	return 0;
}

void helloCPP(int n, int m) {
	for (int i = 0; i < n; i++) {
		cout << "Hello C++\n";
	}

	for (int i = 0; i < m; i++) {
		cout << "c++\n";
	}
}