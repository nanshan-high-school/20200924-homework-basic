#include <iostream>
 int main(){
     for(int i = 0; i < 8; i++){
         for(int j = 0; j < 7 - i; j++){
             printf(" ");
         }
         for(int k = 0; k <= i; k++){
             printf("#");
         }

     }
 }