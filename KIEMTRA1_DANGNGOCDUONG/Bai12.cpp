#include<stdio.h>
#include<conio.h>
using namespace std;
	float TBC(int n,int x){
	return(float)n/x;
	}
	void NHAPN(int n){
	int S=0;
	int dem=0;
do{
 printf("nhap vao so nguyen duong,0 de thoat:");
 scanf("%d",&n);
 	if(n>0){
 	S+=n;
 	dem++;}
}while(n!=0);
	printf("%d %d",dem,S);
	printf("diem tb so duong: %f",TBC(S,dem));
}
int main(){
 int n,x;
 NHAPN(n);
 return 0;
}
