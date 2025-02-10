#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str = "Hello, C++ World!";

    // size_t : 컨테이너나 문자열의 크기 및 인덱스를 표현할 때 사용하는 타입
    size_t pos1 = str.find("Hello");
    cout << pos1 << endl; // 0

    size_t pos2 = str.find('C');
    cout << pos2 << endl; // 7

    size_t start_index = 2;
    size_t pos3 = str.find("Hello", start_index);
    cout << pos3 << endl; // 18446744073709551615 (존재하지 않으므로 쓰레기값)

    size_t pos4 = str.find("Python");
    cout << pos4 << endl; // 18446744073709551615 (존재하지 않으므로 쓰레기값)
}