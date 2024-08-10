#include <stdio.h>
#include <conio.h>
using namespace std;
int main() {
	//init
	int a,b,c,x=0;
	//input: a,b,c
	printf("a= "); scanf("%d",&a);
	printf("b= "); scanf("%d",&b);
	printf("c= "); scanf("%d",&c);
	//process
	if (a%2==0 && x<a) x=a;
	if (b%2==0 && x<b) x=b;
	if (c%2==0 && x<c) x=c;
	//output: x
	printf("So chan lon nhat: %d", x);
}
