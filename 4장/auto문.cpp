#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
    // auto 키워드 : 변수의 타입을 자동으로 추론!
    auto num = 42; // int
    cout << num << endl;

    auto pi = 3.14159; // double
    cout << pi << endl;

    auto greeting = string("Hello World");
    cout << greeting << endl;

    return 0;
}