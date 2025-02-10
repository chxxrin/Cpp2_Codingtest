#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point
{
    int x, y;

    Point(int x, int y) : x(x), y(y) {}
};

// 사용자정의 비교 함수
bool compare(const Point &a, const Point &b)
{
    if (a.x == b.x) // x 좌표가 같으면 y 좌표를 기준으로 오름차순 정렬
    {
        return a.y < b.y;
    }
    return a.x < b.x; // 그렇지 않으면 x 좌표 기준으로 오름차순 정렬
}

int main()
{
    // sort() : 컨테이너 정렬 함수
    // sort(시작반복자, 끝반복자)
    // sort(시작반복자, 끝반복자, 비교함수)

    // 오름차순 정렬
    vector<int> v = {4, 2, 5, 3, 1};
    sort(v.begin(), v.end());
    for (int num : v)
    {
        cout << num << ' ';
    }
    cout << endl;

    // 내림차순정렬
    sort(v.rbegin(), v.rend());
    for (int num : v)
    {
        cout << num << ' ';
    }
    cout << endl;

    //
    vector<Point> points = {{3, 4}, {1, 2}, {3, 1}, {2, 5}};
    sort(points.begin(), points.end(), compare);
    for (const Point &p : points)
    {
        cout << "(" << p.x << ", " << p.y << ") ";
    }
    cout << endl;
    return 0;
}