#include<conio.h>
#include<stdio.h>
using namespace std;
void NvaIMang(int a[],int &n){
	printf("Nhap so luong phan tu trong mang so nguyen a: \nN= "); scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("a[%d]= ",i); scanf("%d",&a[i]);
	}
	printf("Mang gom: ");
	for(int i=0;i<n;i++) printf("%d  ",a[i]);
}
int demSNT(int a[],int n){
	int SNT=0,dem=0;
	for(int i=0;i<n;i++){
		for(int j=2;j<a[i];j++) if (a[i]%j==0) SNT=1;
		if (a[i]==1) SNT=1;
		if (SNT==0) dem++;
		SNT=0;
	}
	return dem;
}
int main()
{
	int a[100], n,SNT;
	NvaIMang(a,n);
	SNT=demSNT(a,n);
	printf("\n So luong SNT co trong mang la: %d",SNT);
	getch();
}
