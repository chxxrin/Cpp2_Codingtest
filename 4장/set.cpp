#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    // set : 중복허용X, 자동정렬
    set<int> s1;
    set<int> s2 = {3, 1, 3, 2, 5};
    set<int> s3(s2);

    // 원소탐색 : .find()
    set<int> numbers = {1, 2, 3, 4, 5};
    int targets[] = {3, 7};

    for (int target : targets)
    {
        auto it = numbers.find(target);

        if (it != numbers.end())
        {
            cout << "원소 " << target << "를 찾았습니다. 값 : " << *it << endl;
        }
        else
        {
            cout << "원소 " << target << "를 찾지 못했습니다." << endl;
        }
    }

    // 삽입삭제 : insert(), erase()
    set<int> s = {1, 3, 2, 1, 5};
    s.insert(4);
    s.erase(2);

    auto i = s.find(4);
    if (i != s.end())
    {
        s.erase(i);
    }

    return 0;
}