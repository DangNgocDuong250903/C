#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	//INIT
	float CC, TL, GK, TH, THI, TK;  //int  float 
	//INPUT
	printf("Chuong trinh tong ket mon hoc.");
	printf("\nMoi ban nhap diem thanh phan:");
	printf("\n\nCC (chuyen can): "); scanf("%f",&CC);
	printf("\nTL (thao luan): ");    scanf("%f",&TL);
	printf("\nGK (giua ky): ");      scanf("%f",&GK);
	printf("\nTH (thuc hanh): ");    scanf("%f",&TH);
	printf("\nThi (thi het mon): "); scanf("%f",&THI);
	//PROCESS
	TK= CC*0.1+TL*0.1+GK*0.15+TH*0.2+THI*0.45;
	//OUTPUT
	printf("\n\nDiem tong ket mon: %f",TK);	
	printf("\nChuong trinh da ket thuc!");

	getch();
}





