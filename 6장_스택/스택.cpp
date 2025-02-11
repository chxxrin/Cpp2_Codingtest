#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

// stack정의 : stack<int> stack;
// stack에 추가 : stack.push()
// stack 비었는지 확인 : stack.empty()
// stack의 맨 위 요소 확인 : stack.top()
// stack에서 제거 : stack.pop()

int main()
{
    stack<int> stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    while (!stack.empty())
    {
        cout << stack.top() << " ";
        stack.pop();
    }
    cout << endl;

    return 0;
}