#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // count() : 특정값이 나타나는 횟수
    // count(시작반복자, 끝반복자, 횟수)

    vector<int> v = {1, 4, 3, 4, 5, 4, 5};

    int ret = count(v.begin(), v.end(), 5);

    cout << ret << endl;

    return 0;
}