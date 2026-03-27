#include <iostream>
using namespace std;

int main() {
    //設定變數和輸入
    int num;
    cout << "高度: ";
    cin >> num;

    //設定幾行,輸出後換行
    for (int i = num; i > 0; i--) {

        //空格數目及輸出
        for (int j = 0; j < i - 1; j++) {
            cout << " ";
        }
        
        //井字號數目及輸出
        for (int k = 0; k < num - i + 1; k++) {
            cout << "#";
        }
        
        cout << "\n";
    }
}
