#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
	printf("Chuong trinh may tinh dien tu \n");
	//INIT
	int a,b; char pheptinh; float kq;
	//INPUT
	printf("Nhap vao a: "); scanf("%d",&a);
	printf("Nhap vao b: "); scanf("%d",&b);
	fflush(stdin);
	printf("Nhap vao phep toan (+,-,*,/): "); scanf("%c",&pheptinh);
	//PROCESS
	switch (pheptinh) {
		case '+':
			kq=a+b; break;
		case '-':
			kq=a-b; break;
		case '*':
			kq=a*b; break;
		case '/':
			kq= float (a)/b;
	}
	//OUTPUT
	printf("\n %d %c %d = %f",a,pheptinh,b,kq);
	getch();
}

