#include <iostream>

using namespace std;

int main_4() {
	// char : ���� ������
	int a = 77;
	char b = a;

	char c[] = { 'a', 'b', 'c', '\0'};
	// null ���� '\0'
	// "" >> ��������� null ���ڰ� ����

	cout << b << endl;
	cout << c << endl;

	bool d = 0;
	bool e = 1;

	cout << d << endl;
	cout << e << endl;
	
	return 0;
}