#include<stdio.h>
#include <unistd.h> 
#include<iostream>
using namespace std;
int main() {
  int a,b = 0;
  cout<< "金字塔的高是?"<<endl;
  cin>> a;
  cout<<"將畫一個"<<a<<"*"<<a<<"的金字塔"<<endl;
  sleep(2);
  for (int c=1;  c<=a;  c++) {
    for (int b=a;  b>=c;  b--) {
      cout<<" ";
      }
    for (int d=1;  d<=c;  d++) {
      cout<<"*";
      }
  cout<<endl;
  }
  return 0;
}
