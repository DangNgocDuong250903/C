#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
	int n=15; //n la so dong
	for (int i=1; i<=(n*2-1); i+=2) {
		for (int j=1; j<=(n*2-1)-i; j++) printf(" ");
		for (int j=1; j<=i; j++) printf("*");
		printf("\n");
	}
	getch();
}


