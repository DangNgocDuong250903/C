#include <stdio.h>
#include <conio.h>
using namespace std;

int main() {
	//init
	int t,m;
	//input
	printf("nhap tu so: "); scanf("%d",&t);
	do {
		printf("nhap mau so: "); scanf("%d",&m);
	} while (m==0);
	//process
	//output
	printf("phan so vua nhap: %d/%d",t,m);
}

