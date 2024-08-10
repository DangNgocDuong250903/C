#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
	int i1,i2, tong, tich;
	//
	printf("Chuong trinh tinh tong va tich cua hai so\n");
	//INPUT
	printf("Nhap vao so nguyen 1 = "); scanf("%d",&i1);
	printf("Nhap vao so nguyen 2 = "); scanf("%d",&i2);
	//PROCESS
	tong=i1+i2;
	tich=i1*i2;
	//OUTPUT
	printf("Tong: %d + %d = %d\n",i1,i2,tong);
	printf("Tich: %d x %d = %d",i1,i2,tich);
	//
	getch();
}



