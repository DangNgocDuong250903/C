#include <stdio.h>
#include <conio.h>
using namespace std;

int SCLN(int a, int b, int c) {
	int x=0;
	if (a%2==0 && x<a) x=a;
	if (b%2==0 && x<b) x=b;
	if (c%2==0 && x<c) x=c;
	return x; //output
}

int main() {
	//init
	int a,b,c,x=0;
	//input: a,b,c
	printf("a= "); scanf("%d",&a);
	printf("b= "); scanf("%d",&b);
	printf("c= "); scanf("%d",&c);
	//process
	x=SCLN(a,b,c);
	//output: x
	printf("So chan lon nhat: %d", x);
}
