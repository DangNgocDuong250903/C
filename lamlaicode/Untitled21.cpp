#include <stdio.h>
#include <math.h>
#include <conio.h>
using namespace std;
int NHAPN(){
	int n;
	do{
		printf("NhapN: "); scanf("%d",&n);
	}while(n<0);
	return n;
}
float TBC(){
	int s=0,n=0,dem=0; float TB=0;
	do{
		n=NHAPN();
		if(n!=0){
			s+=n;
			dem++;
		}
	}while(n!=0);
	TB=(float) s/dem;
	return TB;
}
int main(){
	float S;
	S=TBC();
	printf("TBC: %f",S);
	getch();
}
