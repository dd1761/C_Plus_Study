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

    cout << "당신의 이름을 입력하십시오.\n";
    //cin >> temp->name;
    cin >> (*temp).name;

    cout << "당신의 나이를 입력하십시오.\n";
    cin >> (*temp).age;

    cout << "안녕하세요! " << temp->name << "씨!\n";
    cout << "당신은 " << temp->age << "살 이군요!\n";

    delete temp;
    return 0;
}