#include <iostream>
#include <cstring>

using namespace std;

int main_7() {
    //����� �Է�
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++programing";

    cout << "�ȳ��ϼ���! ���� " << name2;
    cout << "�Դϴ�! ������ ��� �ǽó���?\n";
    //cin >> name1;
    cin.get(name1, Size);
    
    cout << "��, " << name1 << "��, ����� �̸��� ";
    cout << strlen(name1) << "���Դϴٸ�\n";
    cout << sizeof(name1) << "����Ʈ ũ���� �迭�� ����Ǿ����ϴ�. \n";
    cout << "�̸��� " << name1[0] << "�ڷ� �����ϴ±���.\n";
    name2[3] = '\0';
    cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ�: ";
    cout << name2 << endl;


    // c++ ���� ���ڿ��� �ٷ�� string
    // string������ �迭�� ��°�� ���� �� �ִ�
    return 0;
}