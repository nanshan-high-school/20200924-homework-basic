#include <iostream>
using  namespace std;
int main() {
    int h;
    cout << "高度";
    cin >> h;
    for(int i=h;i>0;i--){
        for(int j=i-1;j>0;j--){
            cout << " ";
        }
        for(int k=h-i+1;k>0;k--){
            cout << "*";
        }
        for(int k=h-i;k>0;k--){
            cout << "*";
        }            
        cout << "\n";
    }
}