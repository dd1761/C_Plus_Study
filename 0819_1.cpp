#include <iostream>
#define SIZE 20

using namespace std;

struct MyStruct
{
    char name[20];
    int age;
};

int main_0819_1() {

    MyStruct* temp = new MyStruct;

    cout << "����� �̸��� �Է��Ͻʽÿ�.\n";
    //cin >> temp->name;
    cin >> (*temp).name;

    cout << "����� ���̸� �Է��Ͻʽÿ�.\n";
    cin >> (*temp).age;

    cout << "�ȳ��ϼ���! " << temp->name << "��!\n";
    cout << "����� " << temp->age << "�� �̱���!\n";

    delete temp;
    return 0;
}