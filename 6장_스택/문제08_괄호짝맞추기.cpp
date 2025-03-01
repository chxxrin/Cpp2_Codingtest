#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

bool solution(string s)
{
    stack<char> stack;

    for (char c : s)
    {
        if (c == '(')
        {
            stack.push(c);
        }
        else if (c == ')')
        {
            if (stack.empty())
            {
                return false;
            }
            else
            {
                stack.pop();
            }
        }
    }
    return stack.empty();
}
int main()
{

    return 0;
}