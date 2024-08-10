#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	//INIT
	int n=3;
	//INPUT

	//PROCESS
	for (int i=1; i<=n; i++) 
	{
		if (i<n) printf("%d+",i);
		else printf("%d",i);
	}
	//OUTPUT
	getch();
}



