#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	//INIT
	int s,n;
	//INPUT
	//PROCESS
	s=0;
	while (1) 
	{
		printf("n= "); scanf("%d",&n);
		if (n>0) s+=n;
		else break;
	}
	//OUTPUT
	printf("OK");
	getch();
}



