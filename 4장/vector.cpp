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
    return 0;
}