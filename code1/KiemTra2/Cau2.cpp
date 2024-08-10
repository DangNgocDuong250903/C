#include <stdio.h>
#include <conio.h>
using namespace std;

int main() {
	//init
	int n,s1=0,s2=0,i;
	//input
	do {
		printf("n= "); scanf("%d",&n);
	} while (n<=0);
	//process
	for (i=1; i<=n; i++) s1+= i*i;
	i=1;
	while (i<=n) {
		s2+= i*i;
		i++;
	}
	//output
	printf("s1= %d, s2= %d",s1,s2);
}

