#include <iostream>

using namespace std;

int main_5() {
	// ���� ���̸� ���ϴ� ���α׷�
	// ������ * ������ * ����

	int r = 3; 
	float s = r * r * 3.14;

	const float PIE = 3.1415926284;
	// �ٲ��� �ȵǴ� ���� const�� ����


	// ���������� �������� ��ȯ
	char ch = 'M';

	cout << (int)ch << " " << int(ch) << endl;
	cout << static_cast<int>(ch) << endl;

	cout << s << endl;

	return 0;
}