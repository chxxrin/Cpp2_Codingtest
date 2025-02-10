#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    // next_permutation : 가능한 모든 순열을 생성
    // next_permutation(시작반복자, 끝반복자)
    // 순열은 사전순으로 생성
    // 순열은 사전순으로 정렬된 상태가 아니라면 부족한 답을 낸다
    // 가능한 순열이 있으면 true, 없으면 false
    // 주로 while문
    // 만약 데이터가 사전순으로 정렬된 상태가 아니라면 sort() -> next_permutation()
    vector<int> v = {1, 2, 3};

    do
    {
        for (int i : v)
        {
            cout << i << ' ';
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));
    return 0;
}