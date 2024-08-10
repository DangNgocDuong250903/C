#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
	//khai bao
	int m[100], n; //*****
	//input 1
	printf("nhap so luong phan tu N va nhap mang M: \n");
	printf("n= "); scanf("%d",&n);
	//input 2
	for (int i=0; i<n; i++) {
		printf("m[%d]= ",i); scanf("%d",&m[i]); //*****
	}
	//output
	printf("mang m vua nhap: \n");
	for (int i=0; i<n; i++) printf("%d \t",m[i]); //*****

	getch();
}



