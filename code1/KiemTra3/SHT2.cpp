#include <stdio.h>
#include <conio.h>
using namespace std;

int KTSHT(int X) {
	int S=0, KT=0; //gia su X ko la SHT
	for (int i=1; i<X; i++)
		if (X%i==0) S+=i;
	if (S==X) KT=1; //KT=1: X la SHT
	return KT;
}

int main() {
	//init
	int N;
	//input: N
	printf("N= "); scanf("%d",&N);
	//process:
	//output:
	for (int i=1; i<=N; i++)
		if (KTSHT(i)==1) printf("%d \t",i);
}






