#include <iostream>

using namespace std;

int main_0819_6() {

	//�� ǥ����
	// ����, ����, ������

	//����
	/*
		���� || ����, ���� �ϳ��� �����ص� True
	*/

	// ���� �¿��� ��� true�� ���� true
	/*
		5 = 5 && 9 = 9 true
		5 = 5 && 9 = 2 false

	*/

	cout << "���̸� �Է����ּ��� : ";
	int age;
	cin >> age;

	if (age < 0 || age > 100) {
		cout << "���� \n";
	}
	else if (20 <= age && age <= 29) {
		cout << "20���̽ñ���";
	}
	else {
		int a = (age / 10) * 10;
		cout << "�����" << a << "�� �̽ñ���";
	}
	


	return 0;
}