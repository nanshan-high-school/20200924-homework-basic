#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "height: ";
    cin >> height;
    for (int i = 1; i <= height; i++) {
        for (int j = height - i; j > 0; j--) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
    cout << "\n";
    }
}
