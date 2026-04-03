#include <iostream>
using namespace std;
int height;

int main() {
    cout << "高度: ";
    cin >> height;
    for (int line = 1; line <= height; line++){ 
        for (int word = 0; word < height - line; word++){
            cout << " ";
        }
        for (int word = 0; word < line; word++){
            cout << "#";
        }
        cout << "\n";
    }
}
