#include <stdio.h>
#include <conio.h>
using namespace std;

void NhapM(int a[], int n) {
	for (int i=0; i<n; i++) {
		printf("a[%d]= ",i); scanf("%d",&a[i]);
	}	
}

void XuatM(int a[], int n) {
	for (int i=0; i<n; i++) printf("%d\t",a[i]);	
}

int TongC3(int a[], int n) {
	int s=0;
	for (int i=0; i<n; i++)
		if (a[i]%3==0) s+= a[i];
	return s;	
}
int SHT(int x) {
	int kt=0, s=0;
	for (int i=1; i<x; i++)
		if (x%i==0) s+=i;
	if (s==x) kt=1;
	return kt;
}

int TongSHT(int a[], int n) {
	int s=0;
	for (int i=0; i<n; i++)
		if (SHT(a[i])==1) s+=a[i];
	return s;	
}

int main() {
	//init
	int a[100], n, s1, s2;
	//input: n, a
	printf("n= "); scanf("%d",&n);
	NhapM(a,n);
	//process
	s1=TongC3(a,n);
	s2= TongSHT(a,n);
	//output:
	printf("\na: "); XuatM(a,n);
	printf("\ns1= %d",s1);
	printf("\ns2= %d",s2);
}
