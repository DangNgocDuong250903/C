#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
	void NhapMang(int a[],int &n){
		printf("Nhap n: "); scanf("%d",&n);
		for(int i=0;i<n;i++){
		printf("a[%d] : ",i); scanf("%d",&a[i]);
	}
}
	int Tongam(int a[],int n){
		int S=0;
		for(int i=0;i<n;i++)
			if(a[i]<0) S+=a[i];
		return S;
	}
int main(){
	int n,a[100],S;
	NhapMang(a,n);
	S=Tongam(a,n);
	printf("Tong am: %d",S);
	getch();
}
