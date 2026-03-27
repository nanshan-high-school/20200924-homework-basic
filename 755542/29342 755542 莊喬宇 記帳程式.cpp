#include <iostream>
using namespace std;

int main() {
    int item = 0;
    int money = 0; 
    int total = 0;

    cout << "有幾筆資料:\n";
    cin >> item;
    
    for (int i = 0; i < item; i++) {
        cout << "請輸入第" << i+1 << "行金額:" ;
        cin >> money;
        total += money;
    }
    cout << "總金額為" << total;
}
