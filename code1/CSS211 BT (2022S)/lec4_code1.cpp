#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	//INIT
	int n=2;
	//INPUT
	//PROCESS
	printf("\nn= %d",n);
	switch (n)
	{
		case 1:
			printf("\nMOT");
			break;
		case 2:
			printf("\nHAI");
			break;
		default:	
			printf("\nKHAC");
			//break;
	}
	//OUTPUT
	if (n==1)
	{
		printf("\nMOT");
	}
	else 
	{
		if (n==2)
		{
			printf("\nHAI");
		}
		else
		{
			printf("\nKHAC");
		}	
	}
	getch();
}





