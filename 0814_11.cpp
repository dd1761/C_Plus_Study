#include <iostream>

using namespace std;

int main_11() {
	// new ������

	/*
	� ���������� ���ϴ��� new �����ڿ��� �˷��ָ�
	new �����ڴ� �׿� �˸��� ũ���� �޸� ����� ã�Ƴ��� �� ����� �ּҸ� �����մϴ�.
	*/

	int a;
	int* b = &a;

	int* pointer = new int;

	cout << pointer << endl;
	delete pointer;

	// delete ������

	/*
		����� �޸𸮸� �ٽ� �޸� ���� ȯ��
		ȯ���� �޸𸮴� ���α׷��� �ٸ� �κ��� �ٽ� ���
	
	*/

	int* ps = new int;
	cout << ps << endl;
	delete ps;

	/*
	 1. new�� �������� ���� �޸𸮴� delete�� ������ �� ����.
	 2. ���� �޸� ����� ���޾� �� �� delete�� ������ �� ����.
	 3. new[]�� �޸𸮸� ������ ��� delete[]�� �����Ѵ�.
	 4. ���ȣ�� ������� �ʾҴٸ� delete�� ���ȣ�� ������� �ʾƾ� �Ѵ�.

	*/


	double* p3 = new double[3]; // double�� ������ 3���� ������ �� �ִ� ������ ����
	p3[0] = 0.2; 
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] is " << p3[1] << ".\n";

	p3 = p3 + 1;		// �����͸� �����Ŵ

	cout << "Now p3[0] is " << p3[0] << " and "; 
	cout << "p3[1] is " << p3[1] << "\n.";		

	p3 = p3 - 1;		// �ٽ� ���� ��ġ�� ����.
	delete[] p3;		// �迭 �޸𸮸� ����.


	return 0;
}