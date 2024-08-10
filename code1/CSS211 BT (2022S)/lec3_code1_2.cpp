#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	//INIT
	float CC, TL, GK, TH, THI=0, TK;
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
	
	//if don
	if (THI>0) {
		printf("\nMon hoc da thi.");
	}
	//if don co else
	if (TK<5) {
		printf("\nKet qua mon hoc: Hong");
	}
	else { //TK>=5
		printf("\nKet qua mon hoc: Dat");
	}
	//if long nhau
	if (TK<5) {
		printf("\nXep loai mon hoc: YEU");
	}
	else { //TK>=5
		if (TK<7) {
			printf("\nXep loai mon hoc: TB");
		}
		else { //TK>=7
			printf("\nXep loai mon hoc: KHA");
		}
	}
	//if: >=2 dieu kien
	if (TK>6.5 && CC>7) {
		printf("\nThuong mon hoc: 500K");
	}
	
	getch();
}





