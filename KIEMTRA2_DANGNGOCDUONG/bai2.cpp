#include <stdio.h>
#include <limits.h>
using namespace std;
int main()

{
	int a, b, c, min= INT_MAX;
      printf("Nhap so thu nhat: ");scanf("%d", &a);
      printf("Nhap so thu hai: ");scanf("%d", &b);
      printf("Nhap so thu ba: ");scanf("%d", &c);
          if(a<min && a%2!=0){
          	 min=a;
          printf("\nSo le nho nhat la: %d",min);
		  }
          	       
          if(b<min && b%2!=0){
          	 min=b;
          printf("\nSo le nho nhat la: %d",min);
		  }
                 
          if(c<min && c%2!=0){
          	 min=c;
          printf("\nSo le nho nhat la: %d",min);
		  }
		  
          if(a%2==0 && b%2==0 && c%2==0){
			printf("\nKhong tim duoc");
			}
         	
         
		
         
}
