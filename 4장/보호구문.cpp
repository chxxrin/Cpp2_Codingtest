#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 먼저 예외처리해서 함수 종료처리
double get_avg(const vector<int> &arr, int N)
{
    if (arr.empty())
    {
        return -1;
    }
    if (N == 0)
    {
        return -1;
    }

    int sum = 0;
    for (int num : arr)
    {
        sum += num;
    }
    return sum / N;
}
int main()
{

    return 0;
}