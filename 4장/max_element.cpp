#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // max_element() : 컨테이너 내에서 최댓값의 위치
    // min_element() : 컨테이너 내에서 최솟값의 위치
    // max_element(시작반복자, 끝반복자)
    vector<int> v = {1, 3, 5, 7, 2, 4, 6};

    auto maxIt = max_element(v.begin(), v.end()); // 위치
    auto minIt = min_element(v.begin(), v.end()); // 위치

    // 값
    cout << *maxIt << " " << *minIt << endl;
    return 0;
}