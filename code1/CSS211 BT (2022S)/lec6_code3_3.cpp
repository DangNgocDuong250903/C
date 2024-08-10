#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	int n=-1;
	for ( ;1; )
	//for ( ;n<=0; ) 
	//while (1)
	{
		printf("n= "); scanf("%d",&n);
		if (n>0) break;
	}
	printf("OK");
	getch();
}W



