#include <iostream>
#include <climits>

using namespace std;

int main() {

	// ������ : �Ҽ��ΰ� ���� ��
	// short, int, long, long long

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int�� " << sizeof n_int << " ����Ʈ �Դϴ�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_int << " �Դϴ�." << endl;

	cout << "short�� " << sizeof n_short << " ����Ʈ �Դϴ�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_short<< " �Դϴ�." << endl;

	cout << "long�� " << sizeof n_long << " ����Ʈ �Դϴ�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_long << " �Դϴ�." << endl;

	cout << "long long�� " << sizeof n_llong << " ����Ʈ �Դϴ�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_llong << " �Դϴ�." << endl;

	return 0;
}

