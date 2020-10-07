#include <iostream>
using namespace std;

int main() {
    int num;

    cout <<"高度 :\n";
    cin >> num;

    for (int i = num; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout <<" ";
        }
        for (int k = num - i + 1; k > 0; k--) {
            cout <<"*";
        }

        cout <<"\n";
    }
}
