#include <iostream>
using namespace std;
int count; //輸入資料數量
int total = 0; //總和
int dollar; //單筆輸入資料金額

int main() {
    cout << "請輸入資料數量: ";
    cin >> count;
    for (int i = 0; i < count; i++){
        cout << "輸入第 " << i + 1 << " 筆金額: ";
        cin >> dollar;
        total += dollar;
    }
    cout << "總共 " << total << " 元";
}
