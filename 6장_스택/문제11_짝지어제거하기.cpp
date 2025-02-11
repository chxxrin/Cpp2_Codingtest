#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int solution(string s)
{
    stack<char> stack;

    for (int i = 0; i < s.length(); i++)
    {
        // 만약 스택이 비어있거나 현재 문자와 같은 문자가 아니라면 푸시!
        if (stack.empty() || stack.top() != s[i])
        {
            stack.push(s[i]);
        }
        // 현재 문자와 스택의 가장 최근 문자가 같으면 팝!
        else
        {
            stack.pop();
        }
    }
    // 현재 스택이 비어있거나 문자열의 짝이 맞다는 뜻이므로 true 반환, 아니면 false 반환
    return stack.empty();
}

int main()
{

    return 0;
}