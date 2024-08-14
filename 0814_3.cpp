#include <iostream>
#include <climits>

using namespace std;

int main() {

	// 정수형 : 소수부가 없는 수
	// short, int, long, long long

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int는 " << sizeof n_int << " 바이트 입니다." << endl;
	cout << "이 바이트의 최대값은 " << n_int << " 입니다." << endl;

	cout << "short는 " << sizeof n_short << " 바이트 입니다." << endl;
	cout << "이 바이트의 최대값은 " << n_short<< " 입니다." << endl;

	cout << "long은 " << sizeof n_long << " 바이트 입니다." << endl;
	cout << "이 바이트의 최대값은 " << n_long << " 입니다." << endl;

	cout << "long long는 " << sizeof n_llong << " 바이트 입니다." << endl;
	cout << "이 바이트의 최대값은 " << n_llong << " 입니다." << endl;

	return 0;
}

