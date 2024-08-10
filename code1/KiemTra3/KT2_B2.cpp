//CAU 2 KIEM TRA 2
#include <stdio.h>
#include <conio.h>
using namespace std;
int main() {
	//init
	int n,i,s1=0,s2=0;
	//input
	do {
		printf("n= "); scanf("%d",&n);
	} while (n==0);
	//process 1
	for (i=1; i<=n; i++) s1+=i*i;
	//process 2
	i=1;
	while (i<=n) { s2+=i*i; i++; }
	//output
	printf(" s1= %d \n s2= %d",s1,s2);
}


