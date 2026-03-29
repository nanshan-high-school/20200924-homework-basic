#include <iostream>
using namespace std;

int main() {
    int times, number, sum = 0;
    cout << "輸入幾次: ";
    cin >> times;

    for (int i = 0; times > i; i++) {
        cout << "第" << i+1 << "次" << "\n";
        cin >> number;
        sum += number;
    }
    cout << "總共" << sum << "元" << "\n";
}
