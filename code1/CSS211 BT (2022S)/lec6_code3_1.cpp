#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	//INIT
	int n;
	//INPUT
	printf("n= "); scanf("%d",&n);
	//PROCESS
	while (n<=0) 
	{
		printf("n= "); scanf("%d",&n);
	}
	//OUTPUT
	printf("OK");
	getch();
}



