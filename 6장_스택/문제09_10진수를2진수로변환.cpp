#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>

using namespace std;

string solution(int decimal)
{
    if (decimal == 0)
        return "0";

    stack<int> stack;
    while (decimal > 0)
    {
        stack.push(decimal % 2);
        decimal = decimal / 2;
    }

    string answer = "";
    while (!stack.empty())
    {
        answer += to_string(stack.top());
        stack.pop();
    }
    return answer;
}

int main()
{

    return 0;
}