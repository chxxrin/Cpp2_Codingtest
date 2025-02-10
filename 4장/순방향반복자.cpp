#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    vector<int> vec = {10, 20, 30, 40, 50};

    // it은 vector<int>의 요소를 가리키는 반복자(iterator)
    // *it은 it이 가리키는 실제 값(value)
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        cout << *it << " "; // *it 가 실제값!
    }
    cout << endl;

    // 찾으면 해당 요소의 반복자(iterator)를 반환하고, 찾지 못하면 vec.end()를 반환
    auto target = find(vec.begin(), vec.end(), 30);

    if (target != vec.end()) // 찾지 못하면 vec.end()고, 찾으면 그게 아니므로 target!=vec.end()인거는 찾았다는 뜻
    {
        cout << "Found: " << *target << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    map<string, int> myMap = {
        {"apple", 1},
        {"banana", 2},
        {"cherry", 3}};

    for (auto it = myMap.begin(); it != myMap.end(); ++it)
    {
        cout << it->first << ": " << it->second << endl;
    }

    auto result = myMap.find("banana");
    if (result != myMap.end())
    {
        cout << "Found: " << result->first << "->" << result->second << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}
