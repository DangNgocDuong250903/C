#include <stdio.h>
#include <conio.h>
using namespace std;

int main() {
	//init
	int a,b,c,SLN=0;
	//input: a,b,c
	printf("a= "); scanf("%d",&a);
	printf("b= "); scanf("%d",&b);
	printf("c= "); scanf("%d",&c);
	//process:
	if (a%2==0 && a>SLN) SLN=a;
	if (b%2==0 && b>SLN) SLN=b;
	if (c%2==0 && c>SLN) SLN=c;
	//output: SLN
	if (SLN==0) printf("Ko tim ra...");
	else printf("SLN= %d",SLN);
}






