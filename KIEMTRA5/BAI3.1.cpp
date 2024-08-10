#include <Stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
	int KTSHT(int n){
		int s=0,kt=0;
		for(int i=1;i<n;i++)
			if(n%i==0)	s+=i;
			if(s==n) kt=1;
		return kt;
		
	}
	int XUAT(int n){
			for(int i=1;i<n;i++){
		if(KTSHT(i)==1) printf("%d\t",i);
		
	}
}
int main(){
	int n,KT,Xuat,X;
	printf("Nhap n: "); scanf("%d",&n);
	X=XUAT(n);
	}
	
	