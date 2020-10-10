#include <iostream>
using namespace std;

int main() {
    int height, i, space, j, k, x, y;
    cout << "請輸入菱形的高：";
    cin >> height;
    cout << "請再輸入隨便兩個字：\n";
    cin >> x;
    cin >> y;
    for (i = height; i > 0; i--) {
        for (space = i - 1; space > 0; space--) {
            cout << x;
        }
        for (j = height - i; j >= 0; j--) {
            cout << y;
        }
        for (k = height - i; k > 0; k--) {
            cout << y;
        }
        for (space = i - 1; space > 0; space--) {
            cout << x;
        }

        cout << "\n";
    }
    for (i = 1; i < height; i++) {
        for (space = i; space > 0; space--) {
            cout << x;
        }
        for (j = height - i; j > 0; j--) {
            cout << y;
        }
        for (k = height - i - 1; k > 0; k--) {
            cout << y;
        }
        for (space = i; space > 0; space--) {
            cout << x;
        }

        cout << "\n";
    }
}
