#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int gt(int t){
	int a=1;
	for (int i=1;i<=t;i++){
		a*=i;
	}
	return a;
}
	int MU(int x, int n) {
	int s=1;
	for (int i=1; i<=n; i++) s*=x;
	return s;
}
float tong (int x,float e){
    float b,c; int n;
	do {
		c=double (MU(x,n))/gt(n);
		b+=c;
		n++;
	}while (c>=e);
	return b;
}
int main()
{
	int x; float s,e;
	printf ("\nnhap x: "); scanf ("%d",&x);
	printf ("\nnhap epsilon: "); scanf ("%f",&e);
	s=tong (x,e);
	printf("e^%d=%f",x,s);
	getch();
}
