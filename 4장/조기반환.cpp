#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

double total_price(int quantity, double price)
{
    double total = quantity * price;
    if (total > 100)
    {
        return total * 0.9; // 예외처리 : 조기반환
    }
    return total;
}

int main()
{
    cout << total_price(4, 50) << endl;
    return 0;
}