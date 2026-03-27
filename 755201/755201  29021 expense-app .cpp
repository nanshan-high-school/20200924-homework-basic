#include <iostream>
using namespace std;

int main() {
    int num, coin;
    int sum = 0;
    cout << "資料數量: ";
    cin >> num;
    int counter = num;
    while (counter > 0) {
        cout << "第 " << num - counter + 1 << " 項資料: ";
        cin >> coin;
        sum += coin;
        counter--;
    }
    cout << "總金額: " << sum;
}
