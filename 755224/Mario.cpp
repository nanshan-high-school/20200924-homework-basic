#include <iostream>
using namespace std;

int main() {
    int layers;
    cout << "The amount of layers: ";
    cin >> layers;
    for (int i = layers; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout << " ";
        }
        for (int k = layers - i + 1; k > 0; k--) {
            cout << "#";
        }
        cout << "\n";
    }
}
