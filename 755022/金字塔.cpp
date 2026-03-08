#include <iostream>
using namespace std;

int main() {
  int height, i, j, k;
  cout << "輸入高";
  cin >> height;

  for(i = 0 ; i < height ; i= i + 1) {
    for(k = height - i ; k > 1 ; k = k - 1) {
      cout << " ";
    }
    for(j = 0 ; j < i + 1 ; j = j + 1) {
      cout << "#";
    }   
    cout << endl;
  }
}
