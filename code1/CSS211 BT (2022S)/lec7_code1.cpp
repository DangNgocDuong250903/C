#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	//INIT
	int s=0,n=3,i;
	//INPUT
	//PROCESS
	i=1;
	do {
		s+=i;
		i++;
	} while (i<=n);

	//OUTPUT
	printf("S= %d",s);

	getch();
}



