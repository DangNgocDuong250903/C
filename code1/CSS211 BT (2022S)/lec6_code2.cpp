#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	//INIT
	int i,s,n;
	//INPUT
	printf("n= "); scanf("%d",&n);
	//PROCESS
	s=0;
	i=1;
	while (i<=n) 
	{
		if (i%3==0) s+=i;
		i++;
	}
	//OUTPUT
	printf("s= %d",s);
	getch();
}



