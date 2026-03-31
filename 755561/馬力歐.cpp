#include<iostream>
using namespace std;

int main() {
    int high;

    cout << "高度：";
    cin >> high;

    for(int i = 0 ; i < high+1 ; i++ ) {
        for(int k = 0 ;k < high-i ;k++) {
            cout << " ";
        }
        for(int j = 0 ; j < i ; j++ ) {
            cout << "#";
        }
        cout << "\n";
    }
    cout << "\n";
}
