#include <iostream>
using namespace std;

int main() {
    int count, total = 0, num = 0;

    cout << "輸入幾筆資料:";
    cin >> count;

    for (int i; i < count; i ++) {
        cout << i + 1 << "-";
        cin >> num;
        total = total + num;
    }
    
    cout << "total=" << total;
}
