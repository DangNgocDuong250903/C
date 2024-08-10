#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	//S=1-2+3-4+5-.....+n
	//INIT
	int s,n,dau;

	//INPUT
	printf("n= "); scanf("%d",&n);

	//PROCESS
	s=0; dau=1;
	for (int i=1; i<=n; i++) 
	{
		s= s+i*dau;
		dau=-dau; //dau=-1*dau
	}

	//OUTPUT
	printf("s= %d",s);
	getch();
}



