#include <iostream>
using namespace std;

int main() {
    int size;
    string pic_1, pic_2;

    cout << "輸入大小: ";
    cin >> size;

    cout << "輸入圖型1: ";
    cin >> pic_1;

    cout << "輸入圖型2: ";
    cin >> pic_2;
    
    int i, j;
        for (i = 1; i <= size; i++) {

            for (j = 1; j <= size-i; j++) {
                cout << pic_1;
            }

            for (j = 1; j <= 2 * i - 1; j++) {
                cout << pic_2;
            }

            cout << "\n";
        }
}
