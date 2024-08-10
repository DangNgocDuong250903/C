#include <stdio.h>
#include <conio.h>
using namespace std;

long GT(int n) {
	long s=1;
	for (int i=1; i<=n; i++) s*= i;
	return s;
}
int XmuN(int x, int n) {
	int s=1;
	for (int i=1; i<=n; i++) s*=x;
	return s;
}
int main() {
	double e,s,t; int x,n;
	//input
	x=1; e=0.0001;
	//process 
	n=0; s=1.0;
	do {
		n++;
		t= double (XmuN(x,n))/GT(n);
		s+=t;
		printf("\n %d: %lf ---> S: %lf",n,t,s);
	} while (t>e);
		
	//output
	printf("\n\n s= %f",s);
}






