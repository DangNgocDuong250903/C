#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	//INIT
	int s,n=1;
	//INPUT
	//PROCESS
	s=0;
	while (n>0) 
	{
		printf("n= "); scanf("%d",&n);
		if (n>0) s+=n;
	}
	//OUTPUT
	printf("OK");
	getch();
}



