#include <iostream>

using namespace std;

int main () {
    int i, num, count, total=0;

    cin >> count; 
    for (i=1; i <= count; i++) {
        cin >> num;
        total += num;
    }
    
    cout << "總共 " << total  << " 元\n";
}
