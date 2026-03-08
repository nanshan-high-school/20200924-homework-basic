#include <iostream>
using namespace std;
int main() {
  int num;
  int amount = 0;
  int count;
  cin >> count;
  for (int i = 0; i < count; i++) {
    cin >> num;
    amount = amount + num;
  }
  cout << amount;
}
