#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
	void NHAPMANG(int a[],int &n){
		
		printf("Nhap mang: "); scanf("%d",&n);
		for(int i=0;i<n;i++){
		printf("a[%d]",i); scanf("%d",&a[i]);
	}
		
	}
	int TongAm(int a[],int &n){
		int s=0;
		for(int i=1;i<n;i++){
		if(a[i]<0) s+=a[i];
	}
	return s;
	}
int main(){
	int S,n,a[100];
	NHAPMANG(a,n);
	S=TongAm(a,n);
	printf("TONG AM: %d",S);
	getch();
}
