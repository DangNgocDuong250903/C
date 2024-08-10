#include <stdio.h>
#include <math.h>
#include <conio.h>
using namespace std;
int main() {
   	int n,s,i;
   		s=0; i=1;
   		printf("Nhap n: "); scanf("%d",&n);
   		while(i<=n){
	   	s+=i*i; 
		i++;
	}
		printf("Tong s:%d ",s);
		getch();
}