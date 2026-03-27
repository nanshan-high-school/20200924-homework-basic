#include <iostream>
using namespace std;
int main() {

    int height;
    cout << "請 輸 入 想 要 的 高 度 \n";
    cin >>  height ;

    for(int i = 0 ; i < height ; i++){
        for(int k = height - 1 ; k > i ; k--){
            cout << " ";
        }
        for(int j = 0 ; j <= i ; j++){ 
            cout << "#";
        }
    cout << "\n";
    }
    cout << "輸 出 成 功\n";
}
