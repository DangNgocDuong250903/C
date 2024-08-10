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

int KTSNT(int x) {
	int kt=1; //kt=1 nghia la gia su x la SNT
	for (int i=2; i<x; i++)
		if (x%i==0) kt=0; //vi pham nen kt=0, nghia la x ko la SNT
	return kt;
}
int tongSNT(int m[], int n) {
	int s=0;
	for (int i=0; i<n; i++) 
		if (KTSNT(m[i])==1) s+= m[i];
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


