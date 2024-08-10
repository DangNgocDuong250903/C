#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
	int R; float C, S; //C=2R*PI; S=R^2*PI
	//
	printf("Chuong trinh tinh C & S hinh tron\n");
	//INPUT
	printf("Nhap vao R = "); scanf("%d",&R);
	//PROCESS
	C=2*R*3.14;
	S=R*R*3.14;
	//OUTPUT
	printf("C= 2x%dxPI  = %f\n",R,C);
	printf("S= %dx%dxPI = %f\n",R,R,S);
	//
	getch();
}



