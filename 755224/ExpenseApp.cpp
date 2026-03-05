#include <iostream>
using namespace std;

int main() {
    int amount, money;
    int sum = 0;
    cout << "資料筆數: ";
    cin >> amount;
    int counter = amount;
    while (counter > 0) {
        cout << "第 " << amount - counter + 1 << " 筆資料: ";
        cin >> money;
        sum += money;
        counter--;
    }
    cout << "總和: " << sum;
}
