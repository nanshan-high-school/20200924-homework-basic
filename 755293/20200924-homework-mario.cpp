#include <iostream>

using namespace std;

int main() {
    int i, j, height;

    cin >> height;
    
    for(i=1; i<=height; i++) {

        for(j=height; j>i; j--) {
            cout << " ";
        }

        for(j=0; j < i; j++) {
            cout << "#";
        }

        cout << endl;
    }
}
