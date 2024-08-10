#include <stdio.h>
#include <math.h>
#include <conio.h>
using namespace std;
	void nhapmang(int a[],int &n){
		printf("n= "); scanf("%d",&n);
		for(int i=1;i<=n;i++){
		printf("a[%d]",i); scanf("%d",&a[i]);
		}
	}
	
	void nhapk( int &k){
		printf("Nhap k: "); scanf("%d",&k);		
}
	void phantunhohonk(int a[],int &n,int &k){
		int PTnho=0;
		for(int i=0;i<n;i++){
			if(a[i]<k)
				PTnho++;	
		}
		printf("PT nho hon k la: %d",PTnho);
		
	}
int main() {
	int n,k,s,a[100];
 nhapmang(a,n);
 nhapk(k);
 phantunhohonk(a,n,k);
 getch();
}