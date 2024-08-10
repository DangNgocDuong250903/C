#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int TONG1(int n){ 
	int s=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
		s+=i;
	}
	}
	return s;
}
int main(){
	int n,TONG;
	printf("Nhap n: "); scanf("%d",&n);
	TONG=TONG1(n);
	printf("Tong: %d",TONG);
	getch();
}