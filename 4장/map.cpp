#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    // map : 키-값 쌍으로 갖는 컨테이너
    // 키-값 쌍 : entry
    // std::pair 타입
    // 균형 이진 탐색 트리로 구성
    // 항상 키값을 기준으로 데이터가 자동 정렬
    // 맵의 키값은 중복되지 않고 유일하다
    // pair객체이므로 first는 맵의 키 정보, second는 맵의 값 정보 (key : first, value : second)

    map<string, double> emplyeeSalaries;

    map<string, double> studentGrades = {{"John", 3.7},
                                         {"Emma", 3.9},
                                         {"Sophia", 4.0}};

    // 특정 키에 접근 : [], .find()

    map<string, int> studentScores;

    studentScores["Alice"] = 95;
    studentScores["Bob"] = 88;
    studentScores["Charlie"] = 92;

    int score1 = studentScores["Alice"];
    cout << score1 << endl;

    int score2 = studentScores["rabbit"]; // 배열에 없었는데 여기서 생성함!
    cout << score2 << endl;

    auto it = studentScores.find("Charlie");
    if (it != studentScores.end())
    {
        int score3 = it->second;
        cout << score3 << endl;
    }

    // 값 변경 : []
    map<string, int> myMap = {{"Apple", 1},
                              {"Banana", 2},
                              {"Cherry", 3}};
    myMap["Banana"] = 10;

    // 삽입삭제 : insert(), erase()
    map<int, string> myMap2;

    myMap2.insert(make_pair(1, "Apple"));
    myMap2.insert({2, "Banana"});
    myMap2[3] = "Cherry";

    for (const auto &pair : myMap)
    {
        cout << pair.first << ":" << pair.second << endl;
    }

    myMap2.erase(2);

    for (const auto &pair : myMap2)
    {
        cout << pair.first << ":" << pair.second << endl;
    }

    auto i = myMap2.find(3);
    if (i != myMap2.end())
    {
        myMap2.erase(i);
    }

    for (const auto &pair : myMap2)
    {
        cout << pair.first << ":" << pair.second << endl;
    }

    return 0;
}