#include <iostream>
using namespace std;

int main() {
  int line = 0, count = 0, a, num;
  cout << "有幾筆資料?";
  cin >> a;

  while(line < a) {
    cout << "輸入存款";
    cin >> num;
    line += 1;
    count = count + num;
  }

  cout<< "總存款為" << count;
}
