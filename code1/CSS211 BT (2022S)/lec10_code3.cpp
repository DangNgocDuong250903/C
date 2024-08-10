#include <stdio.h>
#include <conio.h>
using namespace std;

struct PhanSo {
	int tu,mau;
};

PhanSo nhap() {
	PhanSo x;
	printf("tu= "); scanf("%d",&x.tu);
	printf("mau= "); scanf("%d",&x.mau);
	return x; //main: b=nhap(); => b=x
}
void nhap(PhanSo &x) { // main: nhap(b); => b=x
	printf("tu= "); scanf("%d",&x.tu);
	printf("mau= "); scanf("%d",&x.mau);
}
void xuat(PhanSo x) {
	printf("%d/%d",x.tu,x.mau);
}
PhanSo tong(PhanSo a, PhanSo b) {
	PhanSo c;
	c.tu= a.tu*b.mau + a.mau*b.tu;
	c.mau= a.mau*b.mau;
	return c;
}
int main()
{
	printf("Nhan 2 PHAN SO \n");
	//INIT
	PhanSo a,b,c;
	//INPUT
	printf("Nhap phan so a: \n"); a=nhap();
	printf("Nhap phan so b: \n"); b=nhap();
	//PROCESS
	c=tong(a,b);
	//OUTPUT
	printf("Tong 2 PS: \n");
	xuat(a); printf(" + "); xuat(b); printf("= "); xuat(c);
	getch();
}



