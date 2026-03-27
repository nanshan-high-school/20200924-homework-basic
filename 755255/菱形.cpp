#include <iostream>
using namespace std;
int main() {

    int height;
    int num;
    string word;
    
    cout << "請 輸 入 想 要 的 高 度 \n";
    cin >>  height ;
    cout << "請 輸 入 想 要 的 數 量 \n";
    cin >>  num ;
    cout << "請 輸 入 想 要 的 符 號 \n";
    cin >>  word ;

    for(int i = 0; i < num; i++){
        for(int i = 0 ; i < height ; i++){
            for(int k = height - 1 ; k > i ; k--){
                cout << " ";
            }
            for(int j = 0 ; j <= i ; j++){ 
                cout << word;
            }
            for(int j = 1 ; j <= i ; j++){ 
                cout << word;
            }
        cout << "\n";
        }
        for(int i = 0;i < height ;i++){
            for(int j = 0;i > j - 1;j++){
                cout << " ";
            }
            for(int k = i;k < height - 1;k++){
                cout << word;
            }
            for(int k = i;k < height - 2;k++){
                cout << word;
            }
            cout << "\n";
        }
    }
    cout << "輸 出 成 功\n";   
}
