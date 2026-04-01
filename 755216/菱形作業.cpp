
#include<iostream>
using namespace std;
int main() {
    int a, b = 0;
    int x, y;
    cout << "高?" << endl;
    cin >> a;
    cin >> x;
    cin >> y;
    for (int c = 1; c <= a; c++) {
      for (int b = a; b > c; b--) {
        cout << x;
        }
      for (int d = 1; d <= c; d++) {
        cout << y;
        }
      for (int j = c - 1; j > 0; j--) {
        cout << y;
        }
    cout << endl;
    }
    for (int c = 1; c < a; c++) {
      for (int b = c; b > 0; b--) {
        cout << x;
      }
      for (int j = a - c; j > 0; j--) {
        cout << y;
      }
      for (int z = a - c; z > 1; z--) {
        cout << y;
      }
      cout << endl;
    }

    return 0;
}
