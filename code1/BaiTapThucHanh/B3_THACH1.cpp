#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
	//INIT
	int N, S;
	//INPUT
	N=123;
	//PROCESS
	S=0;
	while (N!=0) {
		S+= N%10; //lay so cuoi cua N
		N/= 10; //bo so cuoi ra khoi N
	}
	//OUTPUT
	printf("S= %d",S);
	//
	getch();
}

