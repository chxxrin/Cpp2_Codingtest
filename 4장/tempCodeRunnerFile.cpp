#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main()
{
    // 범위 기반 반복문 : 배열이나 컨테이너의 모든 원소를 순회

    // vector
    vector<int> vec = {1, 2, 3, 4, 5};
    for (int num : vec)
    {
        cout << num << " ";
    }
    cout << endl;

    // map
    map<string, int> fruitMap = {
        {"apple", 1},
        {"banana", 2},
        {"cherry", 3}};
    for (const auto &pair : fruitMap)
    {
        cout << pair.first << "=" << pair.second << " ";
    }
    cout << endl;

    // set
    set<string> fruitSet = {
        "apple", "banana", "cherry"};
    for (const auto &fruit : fruitSet)
    {
        cout << fruit << ' ';
    }
    cout << endl;
    return 0;
}