#include <iostream>

using namespace std;

int main() {
    int a = 13;
    int b =4;
    // 정수형 변수 선언 및 산술연산
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
    cout << -a << endl;

    // 정수형 비교 연산
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;

    // 정수형 비트 연산
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    
    return 0;
}