#include <iostream>
using namespace std;

int main() {
    int count, output = 0;
    int money [count];
    cout << "請輸入筆數： ";
    cin >> count;

    for(int j = 1; j <= count; j++){
        cout << "請輸入第" << j << "筆： ";
        cin >> money[j];
        output = output + money[j];
    }
    cout << output;
}
