#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
	printf("S= 1/1^1 - 1/2^2 + 1/3^3 - ... + 1/n^n \n");
	//INIT
	int dau=1, N; float S=0;
	//INPUT
	printf("N= "); scanf("%d",&N);
	//PROCESS
	for (int i=1; i<=N; i++) {
		S+= dau*(1/pow(i,i));
		dau=-dau;
	}
	//OUTPUT
	printf("S= %f",S);
	//
	getch();
}

