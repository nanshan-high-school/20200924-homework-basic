#include <iostream>
using namespace std;

int main() {
    int h;
    cout << "輸入高度: ";
    cin >> h;
    cout << "\n";

    for (int i = 0; i < h; i++){

        for (int k = h - 1; k > i; k--){
            cout << " ";
        }

        for (int j = 0; j <= i; j++){
            cout << "#";
        }

        cout << "\n";
    }

    cout << "\n三角形結果如上";
}
