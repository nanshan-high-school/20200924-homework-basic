#include <iostream>
using namespace std;
int main() {
    int count, total, temporarily = 0;
  
    cout << "請問有幾筆資料: ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        temporarily = 0;
        cout << "請輸入第" << i + 1 << "筆存款:" ;
        cin >> temporarily;
        total = total + temporarily;
    }
    cout << "一共是 " << total << "元";