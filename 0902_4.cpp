#include <iostream>

using namespace std;

void countDown(int n);

int main_0902_4() {
	//���ȣ�� : c++���� �Լ��� �ڱ� �ڽ��� ȣ���� �� �ִ�.

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
	cout << "ī��Ʈ �ٿ�... " << n << endl;
	if (n > 0) {
		countDown(n - 1);
	}
	cout << n << "��° ����Լ�" << endl;
}