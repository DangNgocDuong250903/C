#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int Nhapn(){
	int n;
	do{
			printf("Nhap n: "); scanf("%d",&n);
	}while(n<0);
	
	return n;
}
float TinhTBC(){
	int s=0; float TB=0; int dem=0; int n=0;
	do{
		n=Nhapn();
		if(n!=0){
			s+=n; dem++;
		}
		
	}while(n!=0);
	TB=(float) s/dem;
	return TB;
}
int main(){ 
	float A;
	A=TinhTBC();
	printf("TB: %f",A);
	getch();
}
