#include <stdio.h>
#include <conio.h>
using namespace std;

int GT(int n) { //n!=1x2x3x....xn
	int s=1;
	if (n!=0) {
		for (int i=1; i<=n; i++) s*=i;
	}
	return s;
}

float TinhS(int n) { //s=1/1!-2/2!+3/3!...
	float s=0; int dau=1;
	for (int i=1; i<=n; i++) {
		s+= 1/float (GT(i)) * dau;
		dau=-dau;
	}
	return s;
}

int NhapN() {
	int n;
	do {
		printf("N= "); scanf("%d",&n);
	} while (n<=0 || n>=10);
	return n;
}

int main()
{
	//INIT
	int N; float S;
	//INPUT
	N=NhapN();
	//PROCESS
	S=TinhS(N);
	//OUTPUT
	printf("S= %f",S);
	//
	getch();
}

