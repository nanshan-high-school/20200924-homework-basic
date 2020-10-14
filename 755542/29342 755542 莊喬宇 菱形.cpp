#include <iostream>
using namespace std;

int main() {
    int high;
    cout << "高度:";
    cin >> high;
    string a, b;
    cout << "空白部分代表:";
    cin >> a;
    cout << "磚塊部分代表:";
    cin >> b;

    for (int y = 1; y <= high-2; y++){
      for(int i = 0; i < (high - y); i++){
        cout << a;
      }
      for(int j = 0; j < (y * 2 - 1); j++){
        cout << b;
      }
      for(int i = 0; i < (high - y); i++){
        cout << a;
      }
      cout << "\n";
    }
    for (int y = high-3; y >= 1; y--){
      for(int i = 0; i < (high - y); i++){
        cout << a;
      }
      for(int j = 0; j < (y * 2 - 1); j++){
        cout << b;
      }
      for(int i = 0; i < (high - y); i++){
        cout << a;
      }
      cout << "\n";
    }
}
