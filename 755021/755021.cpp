#include <iostream>
using namespace std;

int main() {
    int height;
    string mark, space;
    
    cout << "三角形高度: \n";
    cin >> height;

    cout << "三角形符號: \n";
    cin >> mark; 

    for (int i = 1; i <= height; i++) {
        for (int j = height - i; j > 0; j--) {
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << mark;
        }
    cout << "\n";
    }
}
