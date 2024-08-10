#include <stdio.h>
#include <conio.h>
using namespace std;

int main() {
	//init
	int X=1000000000, S=0;
	//input: N
	//process:
	for (int i=1; i<X; i++)
		if (X%i==0) S+=i;
	//output:
	printf("%d",S);
}






