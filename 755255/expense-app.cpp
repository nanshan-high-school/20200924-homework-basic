#include <iostream>
using namespace std;
int main() {
    int count;
    int price;
    int price_total = 0 ;
    cout << "請輸入商單數目\n";
    cin >> count;
    cout << "請輸入金額\n";
    for(int i = 0; i < count; i++)
    {cin >> price;
    price_total = price_total + price;
    }
    cout << price_total;
}
