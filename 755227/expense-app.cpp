#include <iostream>
using namespace std;

int main() {
    int count = 0, money_i = 0, total = 0;
    cout << "輸入幾筆資料: ";
    cin >> count;
    
    for (int i = 0, i <= count, i++){
        cout << "第" << i << "筆資料的金額為: ";
        cin >> money_i;
        cout << "\n";
        total = money_i + money_i;
    }

    cout << "總計: " << total;
}
