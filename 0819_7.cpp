#include <iostream>

using namespace std;

int main_0819_7() {

	int a;
	cin >> a;

	switch (a) {
	case 1: 
		cout << "입력하신 숫자는 1입니다." << endl;
		break;
	case 2:
		cout << "입력하신 숫자는 2입니다." << endl;
		break;
	case 3:
		cout << "입력하신 숫자는 3입니다." << endl;
		break;
	case 4:
		cout << "입력하신 숫자는 4입니다." << endl;
		break;
	case 5:
		cout << "입력하신 숫자는 5입니다." << endl;
		break;
	default:
		cout << "입력하신 값은 1,2,3,4,5 이외의 다른 값 입니다.";
		break;

	}

	return 0;
}