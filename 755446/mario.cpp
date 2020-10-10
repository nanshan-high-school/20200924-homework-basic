#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "height: ";
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
