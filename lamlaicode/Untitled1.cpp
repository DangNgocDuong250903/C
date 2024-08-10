#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int GT(int n){
	int gt=1;
	for(int i=1;i<=n;i++)	gt*=i;
	return gt;
}
	
	float Tinhs(int n){
	float S=0; int dau=1;
	for(int i=1;i<=n;i++){
	S+=(float) i/GT(i)*dau;
	dau=-dau;
}
	return S;
}

int main(){
	int n; float S;
	printf("Nhap n"); scanf("%d",&n);
	S=Tinhs(n);
	printf("s= %f",S);
}
