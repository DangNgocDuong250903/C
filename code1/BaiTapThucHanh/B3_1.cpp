#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
	printf("S= 1^2 + 2^2 + 3^2 + 4^ + ... + n^2 \n");
	//INIT
	int S=0, N;
	//INPUT
	printf("N= "); scanf("%d",&N);
	//PROCESS
	for (int i=1; i<=N; i++) {
		S+= i*i;
	}
	//OUTPUT
	printf("S= %d",S);
	//
	getch();
}

