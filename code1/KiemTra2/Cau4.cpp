#include <stdio.h>
#include <conio.h>
using namespace std;

void nhap_mang(int a[], int n) {
	for (int i=0; i<n; i++) {
		printf("a[%d]= ",i); scanf("%d",&a[i]);
	}
}
void in_mang(int a[], int n) {
	for (int i=0; i<n; i++) printf("%d \t",a[i]);
}
int dem_k(int a[], int n, int k) {
	int d=0;
	for (int i=0; i<n; i++)
		if (a[i]<k) d++;
	return d;
}
int main() {
	//init
	int n,a[100],k,d;
	//input
	printf("n= "); scanf("%d",&n);
	nhap_mang(a,n);
	printf("\n k= "); scanf("%d",&k);
	//process
	d=dem_k(a,n,k);
	//output
	in_mang(a,n);
	printf("\n co %d so nho hon %d",d,k);
}

