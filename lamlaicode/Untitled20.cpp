#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	int tu,mau;
	printf("Nhap tu: "); scanf("%d",&tu);
	do{
		printf("Nhap mau: "); scanf("%d",&mau);
	}while(mau<0);
	printf("%d/%d",tu,mau);
	getch();
}
