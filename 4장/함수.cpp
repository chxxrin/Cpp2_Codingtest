#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int add(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int a = 5;
    int b = 10;

    cout << add(a, b) << endl;
    return 0;
}