#include <iostream>
using namespace std;

int main() {
    int num,j;

    cout <<"請輸入資料 :\n";
    cin >>num;
    
    int total=0;
    for (int i=0; i < num; i++) {
        cout <<"請輸入金額 :";
        cin >>j;
        total += j;    
    }
    cout <<total;
}
