#include <stdio.h>
#include <conio.h>
using namespace std;
	int main(){
	//INIT
	int a,b,c,TONG;
	printf("Nhap a:"); scanf("%d",&a);
	printf("Nhap b:"); scanf("%d",&b);
	printf("Nhap c:"); scanf("%d",&c);
	//INIT

	int SLN=0;
	if(a%2==0 && a>=SLN) SLN=a;
	if(b%2==0 && b>=SLN) SLN=b;
	if(c%2==0 && c>=SLN) SLN=c;
	if(a&2!=0 && b%2!=0 && c%2!=0) printf("Khong Tim Thay");
	printf("SLN= %d",SLN);
	getch();
}