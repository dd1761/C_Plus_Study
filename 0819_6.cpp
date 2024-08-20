#include <iostream>

using namespace std;

int main_0819_6() {

	//논리 표현식
	// 논리합, 논리곱, 논리부정

	//논리합
	/*
		좌항 || 우항, 둘중 하나만 만족해도 True
	*/

	// 논리곱 좌우항 모두 true일 때만 true
	/*
		5 = 5 && 9 = 9 true
		5 = 5 && 9 = 2 false

	*/

	cout << "나이를 입력해주세요 : ";
	int age;
	cin >> age;

	if (age < 0 || age > 100) {
		cout << "구라 \n";
	}
	else if (20 <= age && age <= 29) {
		cout << "20대이시군요";
	}
	else {
		int a = (age / 10) * 10;
		cout << "당신은" << a << "대 이시군요";
	}
	


	return 0;
}