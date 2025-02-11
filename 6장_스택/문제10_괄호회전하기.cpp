#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <stack>

using namespace std;

// 닫는 괄호 → 여는 괄호 매핑을 저장하는 해시맵
// 키-값 : 닫힌괄호-열린괄호
// 정렬이 필요 없으므로 unordered_map을 사용
unordered_map<char, char> bracketPair = {{')', '('}, {']', '['}, {'}', '{'}};

// start를 기준으로 문자열을 회전한 상태에서 검사
bool isValid(string &s, int start)
{
    stack<char> stack;

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[(start + i) % s.size()]; // `start`에서 시작하는 회전된 문자열의 i번째 문자

        if (bracketPair.count(ch))
        {
            if (stack.empty() || stack.top() != bracketPair[ch])
                return false;
            stack.pop(); // 짝이 맞으면 스택에서 제거
        }
        else
        {
            stack.push(ch); // 여는 괄호는 스택에 push
        }
    }
    return stack.empty(); // 스택이 비어있다면 올바른 괄호 문자열
}

int solution(string s)
{
    int answer = 0;

    for (int i = 0; i < s.size(); i++) // 문자열을 한 칸씩 회전하면서 검사
    {
        answer += isValid(s, i);
    }
    return answer;
}
int main()
{

    return 0;
}

// 함수없이 작성한 코드
int solution(string s)
{
    int answer = 0;

    for (int start = 0; start < s.size(); start++)
    {
        stack<char> stack;
        bool isValid = true;

        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[(start + i) % s.size()];
            // bracketPair는 닫는 괄호 → 여는 괄호 매핑 (')' -> '(', ']' -> '[', '}' -> '{')
            // count(ch)는 현재 문자가 unordered_map에 존재하는지 확인
            // 존재하면 닫는 괄호(')', ']', '}')이고, 존재하지 않으면 여는 괄호('(', '[', '{')
            // count(ch) == 1이면 ch가 닫는 괄호 (')', ']', '}')
            // count(ch) == 0이면 ch가 여는 괄호 ('(', '[', '{')
            if (bracketPair.count(ch)) // ch가 닫는 괄호인지 확인
            {
                if (stack.empty() || stack.top() != bracketPair[ch]) // 스택이 비어있거나, top과 짝이 안 맞으면 유효하지 않음
                {
                    isValid = false;
                    break;
                }
                stack.pop(); //  짝이 맞으면 스택에서 제거
            }
            else
            {
                stack.push(ch); // 여는 괄호면 스택에 push
            }
        }

        if (isValid && stack.empty())
            answer++;
    }
    return answer;
}
