#include <stdio.h>
#include <conio.h>
using namespace std;

int main() {
	//init
	int n,n1,m=0,i=1;
	//input
	printf("n= "); scanf("%d",&n); n1=n;
	//process
	while (n!=0) {
		m+= n%2*i;
		i*=10;
		n/=2;
	}
	//output
	printf("%d= %d",n1,m);
}

