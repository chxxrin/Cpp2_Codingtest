#include <iostream>

using namespace std;

int main()
{
    int i = 65;
    float f = 5.2f;

    // 암시적 형변환
    double d = i + f;
    cout << d << endl; // 70.2

    // 명시적 형변환
    cout << static_cast<int>(d) << endl; // 70

    cout << static_cast<char>(i) << endl; // A
}