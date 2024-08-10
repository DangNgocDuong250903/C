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
float tong (int x,float e){
    float b,c; int i;
	do {
		c= 1.0*(pow(x,i))/gt(i);
		b+=c;
		i++;
	}while (c>=e);
	return b;
}
int main()
{
	int x; float s,e;
	printf ("\nnhap x: "); scanf ("%d",&x);
	printf ("\nnhap epsilon: "); scanf ("%d",&e);
	s=tong (x,e);
	printf ("\ntong : %f",s);
	getch();
}
