//CAU 1 KIEM TRA 2
#include <stdio.h>
#include <conio.h>
using namespace std;
int NhapN() {
	int n;
	do {
		scanf("%d",&n);
	} while (n==0);
	return n;
}
int main() {
	//init
	int t,m;
	//input
	printf("t= "); scanf("%d",&t);
	printf("m= "); m= NhapN();
	//printf("%d",NhapN());
	//m= NhapN();
	//output
	printf("%d\n-\n%d",t,m);
}


