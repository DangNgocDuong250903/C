//CAU 1 KIEM TRA 2
#include <stdio.h>
#include <conio.h>
using namespace std;
int NhapN(char x[]) {
	int n;
	do {
		printf("%s=",x); scanf("%d",&n);
	} while (n==0);
	return n;
}
int main() {
	//init
	int t,m;
	//input
	printf("tu= "); scanf("%d",&t);
	m= NhapN("mau");
	//printf("%d",NhapN());
	//m= NhapN();
	//output
	printf("%d\n-\n%d",t,m);
}


