//Bai1
#include <conio.h>
#include <stdio.h>
#include <math.h>
using namespace std;
int main(){ 
	int a,b;
	printf("Nhap vao tu: "); scanf("%d",&a);
	do{
	printf("Nhap vao mau: "); scanf("%d",&b);
	}while(b==0);
	printf("Phan so vua nhap: %d/%d",a,b);
	
getch();
}