#include <iostream>
using namespace std;

int main() {
    int height, i, space, j;
    cout << "請輸入金字塔的高：";
    cin >> height;
    for (i = height; i > 0; i--) {
        for (space = i - 1; space > 0; space--) {
            cout << " ";
        }
        for (j = height - i; j >= 0; j--) {
            cout << "#";
        }
        cout << "\n";
    }
}
