#include <iostream>
using namespace std;
int main() {
    int x = 0;
    int y = 0;
    int sum = 0;
    cout << "";
    cin >> x;
    for (int i = 0; i < x; i++) {
        cout << "";
        cin >> y;
        sum += y;
    }
    cout << "總共 " << sum << " 元";
}