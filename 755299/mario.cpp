#include <iostream>
#define _for(i, a, b) for (int i=a ; i > b ; i--)
using namespace std;

int main() {
	int num;
	cin >> num ;
	_for(i, num, 0){
		for (int j=1 ; j<i ; j++) cout << " ";
		_for (k, num-i+1, 0) cout << "#";
		cout << endl;
  }
}
