#include <iostream>
using namespace std;

int main() {
    int count, money, total;

    cin >> count;
    total = 0;

    for(int i = 0 ;i < count ;i++) {
        cin >> money;
        total = money + total;
    }

    cout << "總合為 :" << total;
    cout << "\n";
}
