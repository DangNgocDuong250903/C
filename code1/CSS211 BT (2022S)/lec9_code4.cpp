#include <stdio.h>
#include <conio.h>
using namespace std;

void nhapM(int m[], int &n) {
	//input 1
	printf("nhap so luong phan tu N va nhap mang M: \n");
	printf("n= "); scanf("%d",&n);
	//input 2
	for (int i=0; i<n; i++) {
		printf("m[%d]= ",i); scanf("%d",&m[i]); //*****
	}
}
void xuatM(int m[], int n) {
	//output
	printf("mang m vua nhap: \n");
	for (int i=0; i<n; i++) printf("%d \t",m[i]); //*****
}

int cobelolem(int m[], int n) {
	int s=0;
	for (int i=0; i<n; i++) 
		if (m[i]%2==0) s+= m[i];
	return s;
} 

int main()
{
	//khai bao
	int m[100], n, s; //*****
	//input 1
	nhapM(m,n); //thay lenh? goi ham kieu void
	//process
	s= cobelolem(m,n); //thay lenh? goi ham kieu int
	//output
	xuatM(m,n);
	printf("\nTong so chan: %d", s);

	getch();
}


