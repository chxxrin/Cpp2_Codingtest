#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1;
    string str2 = "Hello World";
    string str3(str2);
    string str4(str2, 0, 5);
    string str5(10, '*');

    return 0;
}