#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // unique() : 중복되는 원소들을 뒤로 밀어내고 중복되지 않은 원소들만 남겨 새로운 범위의 끝 반복자를 반환
    // unique(시작반복자, 끝반복자)

    vector<int> v = {1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5};

    auto newEnd = unique(v.begin(), v.end());

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << v.size() << endl;

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << ' ';
    }
    cout << endl;

    return 0;
}