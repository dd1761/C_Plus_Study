#include <iostream>

using namespace std;

int main_9() {

	// ����ü(union)
	// ���� �ٸ� ���������� �� ���� �� ������ ������ �� ����.

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

	// ����ü (enum)
	// ��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���

	enum spectrum {
		red, orange, yellow, green, blue, violet, indigo, ultraviolet
	};

	/*
	1. spectrum�� ���ο� �������� �̸����� ����ϴ�.
	2. red orange .. 0���� 7���� ���� ���� ���� ��Ÿ���� ��ȣ ����� ����ϴ�.
	*/

	spectrum a = orange;
	cout << a << endl;

	int b;
	b = blue;
	b = blue + 3;

	cout << b << endl;

	return 0;
}