#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    vector<int> v2 = {1, 2, 3, 4, 5};
    vector<int> v3(4, 3);
    vector<int> v4(v3);

    // 이차원벡터
    vector<vector<int>> vv1;

    int rows = 3; // 행
    int cols = 4; // 열
    vector<vector<int>> vv2(rows, vector<int>(cols));

    int val = 9;
    vector<vector<int>> vv3(rows, vector<int>(cols, val));

    vector<vector<int>> vv4 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // 벡터의 원소변경
    vector<int> vec = {1, 2, 3, 4, 5};
    vec[2] = 10;

    // 벡터의 삽입삭제 : push_back(), pop_back()
    vector<int> v = {2, 3, 4, 5};
    v.push_back(6);
    v.pop_back();

    // 벡터의 맨앞 삽입삭제 : v.insert(), v.erase()
    vector<int> v1 = {2, 3, 4, 5};
    v1.insert(v1.begin(), 1);
    v1.erase(v1.begin());

    return 0;
}