#include <iostream>
using namespace std;
int main() {
  int a,d;
  int c=0;
  cout<<"有幾筆資料?"<<endl;
  cin>>a;
  cout<<"請依序輸入"<<a<<"筆資料"<<endl;
  for(int b=1;b<=a;b++)
  {
    cout<<"第"<<b<<"筆資料:";
    cin>>d;
    c=c+d;
  }
  cout<<"總和:"<<c;
}