#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	//INIT s=1*2*3*4*.....*n
	int s,n;

	//INPUT
	printf("n= "); scanf("%d",&n);

	//PROCESS
	s=1;  //s khoi tao la 1 de lenh s=s+i dung
	for (int i=1; i<=n; i++) 
	{
		s= s*i;  //s+=i;
	}

	//OUTPUT
	printf("s= %d",s);
	getch();
}



