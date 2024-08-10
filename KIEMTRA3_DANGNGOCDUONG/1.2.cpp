#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int NhapN(char x[]){
	int n;
	do{
		printf("%s=",x);	scanf("%d",&n);
	}while(n==0);
	return n;
	}
int main(){
	int m,t;
	printf("Nhap tu:"); scanf("%d",&t);
	m=NhapN("Mau");
	printf("%d\n-\n%d",t,m);
	getch();
}