#include <iostream>
using namespace std;

int main() {
    int hight;
    cout << "high: ";
    cin >> hight;
    for(int e = hight;e > 0;e--) {
        for(int i = e;i > 0;i--) {
            cout << " ";
        } 
        for(int layer = 1;layer < hight - e +2;layer++) {
            cout << "#"; 
        }
        cout << "\n";
    }
}
