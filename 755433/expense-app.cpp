#include <iostream>
using namespace std;

int main() {
    //設定變數和多少筆資料
    int count_data, count_sum, total = 0;
    cin >> count_data;

    //算出總金額
    for (int i = 0; i < count_data; i++) {
        cin >> count_sum;
        total = count_sum + total;
    }
    
    //輸出總金額
    cout << "總共 " << total << " 元";
}
