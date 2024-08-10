#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	//S=2+4+6
	//INIT
	int s,n;

	//INPUT
	printf("n= "); scanf("%d",&n);

	//PROCESS
	s=0;
	for (int i=1; i<=n; i++) 
	{
		if (i%2==0) s=s+i;
	}

	//OUTPUT
	printf("s= %d",s);
	getch();
}



