#include <stdio.h>
#include <math.h>
#include <conio.h>
using namespace std;
int tongs1(int n){
		int s1=0;
		for(int i=1;i<=n;i++)
		s1+=i*i;
		return s1;
}
int tongs2(int n){
		int i=1; int s2=0;
   		while(i<=n){
	   	s2+=i*i; 
		i++;
		
	}
	return s2;
}
int main() {
   	int n,s1,i,s2;
   	do{
   		printf("Nhap n: "); scanf("%d",&n);
   	}while(n==0);
	
		printf("Tong s1: %d ",tongs1(n));
		printf("Tong s2: %d ",tongs2(n));
}