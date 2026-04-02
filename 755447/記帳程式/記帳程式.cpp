#include <iostream>
using namespace std;
int main() {
    int times, number, sum = 0;
    cout << "幾筆資料: ";
    cin >> times;

    for (int i = 0; times > i; i++){
        cout << "\n";
        cin >> number;
        sum += number;
    }
    cout << "總金額:" << sum << "\n";
}

