#include <iostream>
using namespace std;

int main() {
    int height, i, j, k;
    cout << "請輸入高度: ";
    cin >> height;

    for (int i = height; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout << " ";
        }

        for (int k = height - i + 1; k > 0; k--) {
            cout << "#";
        }
        
        cout << "\n";
    }     
}