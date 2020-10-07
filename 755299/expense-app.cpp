#include <iostream>
using namespace std;

int main() {
	int x, tot=0;
	cin >> x;
	int input[x];
	for (int i=0 ; i<x ; i++){
		cin >> input[i];
		tot += input[i];
	}
	cout << "總共 " << tot << " 元";
}
