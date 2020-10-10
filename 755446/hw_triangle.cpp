#include <iostream>
using namespace std;

int main() {
    int height;
    string space;
    string word;
    cout << "space: ";
    cin >> space;
    cout << "word: ";
    cin >> word;
    cout << "height: ";
    cin >> height;
    for (int i = height; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout << space;
        }
        for (int k = height - i + 1; k > 0; k--) {
            cout << word;
        }
        cout << "\n";
    }
}
