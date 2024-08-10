#include <stdio.h>
#include <conio.h>
using namespace std;
int main() {
	//init
	int n,s=0;
	//input: n
	printf("n= "); scanf("%d",&n);
	//process
	for (int i=2; i<n; i++)
		if (n%i==0) s+=i;
	//output: x
	printf("Tong uoc so cua %d: %d",n,s);
}
