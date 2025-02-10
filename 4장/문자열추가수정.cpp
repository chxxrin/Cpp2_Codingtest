#include <iostream>
#include <string>

using namespace std;

int main()
{
    // 1. +=
    string str = "APPLE";
    str += ", World";
    cout << str << endl;

    // 2. str[]
    str[4] = 'P';
    cout << str << endl;

    // 3. .replace(시작인덱스, 개수, 변경할문자열)
    str.replace(7, 4, "Col");
    cout << str << endl;

    return 0;
}