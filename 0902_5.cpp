#include <iostream>

using namespace std;

int func(int);

int main_0902_5() {

	//�Լ��� �����ϴ� ������
	// ��� �Լ��� �Լ��� �ּҸ� �Ű������� �Ѱ��ִ� ��� �����ϰ� ����� �� �ִ�.

	/*
		1. �Լ��� �ּҸ� ��´�.
		2. �Լ��� �����ϴ� �����͸� �����Ѵ�.
		3. �Լ��� �����ϴ� �����͸� ����Ͽ� �Լ��� ȣ���Ѵ�.

	*/

	int (*pf)(int);
	pf = func;

	cout << (*pf)(3) << endl;

	return 0;
}

int func(int n) {
	return n + 1;
}