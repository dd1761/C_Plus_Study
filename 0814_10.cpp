#include <iostream>

using namespace std;

int main_10() {

	// ���� ���� ����
	int val = 3;

	cout << &val << endl;

	//C++ : ��ü���� ���α׷���
	/*
	������ �ð��� �ƴ� ���� �ð��� ��� ������ ���� �� �ִ�.
	*/

	// ������ : ����� �ּҿ� �̸��� ���δ�.
	// �� �����ʹ� �������� �̸��� �ּҸ� ��Ÿ����.
	// ������ ������, ���� ���� ������

	int a = 6;
	int* b;

	b = &a;

	cout << "a �� ��" << a << endl;
	cout << "b�� ��" << *b << endl;

	cout << "a�� �ּ�" << &a << endl;
	cout << "b�� ��" << b << endl;

	*b = *b + 1;

	cout << "���� a�� ����" << a << endl;


	return 0;
}