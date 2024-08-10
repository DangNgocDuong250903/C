 #include <stdio.h>
#include <conio.h>
using namespace std;
int main(){
   for(int i = 1; i <= 9; i+=2) {
     for(int m=9;i<m;m-=2) printf("  ");
      for(int j = 1; j <= i; j++)
         printf("*");      
      printf("\n");
      
   }
    }
    