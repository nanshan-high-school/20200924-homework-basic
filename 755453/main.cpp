#include <stdio.h>

int main() {
         for(int i=0;i<=5;i++){
                 for(int j=1;j<=5-i;j++){
                    printf(" ");
                 }
                 for(int n=0;n<=i;n++){
                    printf("#");
                 }
                 printf("\n");
         } 
         return 0;       
}