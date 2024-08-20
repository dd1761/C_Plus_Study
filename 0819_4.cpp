#include <iostream>

using namespace std;

int main_0819_4() {

	int temp[4][5] = {
		{1,2,3,4,5},
		{11,22,33,44,55},
		{111,222,333,444,555},
		{111,222,333,444,555}
	};

	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 5; col++) {
			cout << temp[row][col] << " ";
		}
		cout << '\n';
	}

	return 0;
}