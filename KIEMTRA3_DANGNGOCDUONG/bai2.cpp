#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	int n;
	do{
		printf("Nhap n:"); scanf("%d",&n);
	}while(n<=0);
	int s=0;
	for(int i=1;i<=n;i++)
	s+=i*i;
	printf("Tong s: %d",s);
	getch();
}