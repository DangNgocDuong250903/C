#include <stdio.h>
#include <conio.h>
using namespace std;

struct PhanSo {
	int tu,mau;
};

int main()
{
	printf("Nhan 2 PHAN SO \n");
	//INIT
	PhanSo a,b,c;
	//INPUT
	printf("a.tu= "); scanf("%d",&a.tu);
	printf("a.mau= "); scanf("%d",&a.mau);
	printf("b.tu= "); scanf("%d",&b.tu);
	printf("b.mau= "); scanf("%d",&b.mau);
	//PROCESS
	c.tu= a.tu * b.tu;
	c.mau= a.mau * b.mau;
	//OUTPUT
	printf("%d/%d * %d/%d = %d/%d",a.tu,a.mau,b.tu,b.mau,c.tu,c.mau);

	getch();
}



