#include <iostream>

using namespace std;

const float PIE = 3.14;
void cheers(int n);
float circle(int x);

int main_0819() {

	int a;
	cout << "�ϳ��� ���� �Է��ϼ���" << endl;
	cin >> a;
	cheers(a);

	int b;
	cout << "���� ������ ���̸� �Է��ϼ��� : ";
	cin >> b;
	float c = circle(b);
	cout << "���� ���̴� " << c << " �Դϴ�." << endl;

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

