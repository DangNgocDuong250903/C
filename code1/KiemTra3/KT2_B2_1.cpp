//CAU 2 KIEM TRA 2
#include <stdio.h>
#include <conio.h>
using namespace std;
int S1(int n) {
	int s=0;
	for (int i=1; i<=n; i++) s+=i*i;
	return s;
}
int S2(int n) {
	int i,s=0;
	i=1;
	while (i<=n) { s+=i*i; i++; }
	return s;
}
int main() {
	//init
	int n,a,b;
	//input
	do {
		printf("n= "); scanf("%d",&n);
	} while (n==0);
	//process 1
	a=S1(n);
	//process 2
	b=S2(n);
	//output
	printf(" s1= %d \n s2= %d",a,b);
}


