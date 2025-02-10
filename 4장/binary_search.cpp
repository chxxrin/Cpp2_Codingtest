#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // binary_search() : 주어진 범위 내 원소에 이진탐색을 수행
    // binary_search(시작반복자, 끝반복자, 찾을값)
    // 이미 정렬되어 있어야 정상동작!
    // sort() -> binary_search()
    // 있으면 1, 없으면 0

    vector<int> v = {1, 2, 3, 4, 5};

    cout << binary_search(v.begin(), v.end(), 3) << endl;
    cout << binary_search(v.begin(), v.end(), 7) << endl;

    return 0;
}