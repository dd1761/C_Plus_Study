#include <iostream>

using namespace std;

const float PIE = 3.14;
void cheers(int n);
float circle(int x);

int main_0819() {

	int a;
	cout << "하나의 수를 입력하세요" << endl;
	cin >> a;
	cheers(a);

	int b;
	cout << "원의 반지름 길이를 입력하세요 : ";
	cin >> b;
	float c = circle(b);
	cout << "원의 넒이는 " << c << " 입니다." << endl;

	return 0;
}

void cheers(int n) {
	for (int i = 0; i < n; i++) {
		cout << "Cheers!" << endl;
	}
}

float circle(int x) {
	return x * x * PIE;
}

