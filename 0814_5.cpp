#include <iostream>

using namespace std;

int main_5() {
	// 원의 넓이를 구하는 프로그램
	// 반지름 * 반지름 * 파이

	int r = 3; 
	float s = r * r * 3.14;

	const float PIE = 3.1415926284;
	// 바뀌어서는 안되는 수를 const로 지정


	// 강제적으로 데이터형 변환
	char ch = 'M';

	cout << (int)ch << " " << int(ch) << endl;
	cout << static_cast<int>(ch) << endl;

	cout << s << endl;

	return 0;
}