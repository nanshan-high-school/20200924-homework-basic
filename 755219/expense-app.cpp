#include <iostream>
using namespace std;

int main() {
    int i, totalc, n;
    totalc = 0;
    cout << "請輸入共有幾筆消費資料：\n";
    cin >> i;//幾筆資料
    cout << "請輸入消費金額\n";
    for (i=i;i > 0;i--) {
      cin >> n;//輸入的資料
      totalc = totalc + n;
    }
    cout << "你花了 " << totalc << " 元";
}
