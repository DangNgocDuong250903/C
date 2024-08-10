#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	//INIT
	int a,b,c,sln;

	//INPUT
	printf("\nNhap a,b,c:");
	printf("\na= "); scanf("%d",&a);
	printf("\nb= "); scanf("%d",&b);
	printf("\nc= "); scanf("%d",&c);

	//PROCESS
	sln=a;
	if (b>sln) sln=b;
	if (c>sln) sln=c;

	//OUTPUT
	printf("So lon nhat giua %d, %d va %d la so %d.",a,b,c,sln);

	getch();
}





