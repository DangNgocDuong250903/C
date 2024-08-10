#include <stdio.h>
#include <conio.h>
using namespace std;

int TongUS(int n) {  
	int s=0;
	for (int i=2; i<n; i++)
		if (n%i==0) s+=i;
	return s;	
}

int main() {
	//init
	int n,s=0;
	//input: n
	printf("n= "); scanf("%d",&n);
	//process
	s=TongUS(n);
	//output: x
	printf("Tong uoc so cua %d: %d",n,s);
}
