#include <stdio.h>
#include <conio.h>
using namespace std;
int main(){
	int a,b,c,x=0;
	printf("Nhap a: "); scanf("%d",&a);
	printf("Nhap b: "); scanf("%d",&b);
	printf("Nhap c: "); scanf("%d",&c);
	if(a%2==0 && x<a) x=a;
	if(b%2==0 && x<b) x=b;
	if(c%2==0 && x<c) x=c;
	if(a%2!=0 && b%2!=0 && c%2!=0){
	printf("Khong co gia tri"); x=0;
}
	printf("\n%d",x);
}
