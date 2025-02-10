#include <iostream>
#include <string>

using namespace std;

void modify(int &value)
{
    value = 10;
    cout << "주소 : " << &value << endl; // 주소 : 0x16b527018 (main의 주소와 동일)
    cout << "값 : " << value << endl;    // 값 : 10
}

int main()
{
    int value = 5;
    cout << "주소 : " << &value << endl; // 주소 : 0x16d7bb048
    cout << "값 : " << value << endl;    // 값 : 5
    modify(value);
    cout << "값  : " << value << endl; // 값  : 10

    return 0;
}