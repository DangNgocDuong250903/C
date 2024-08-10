#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	//INIT
	int a,b; float x;
	//INPUT
	printf("\nCT giai PT bac 1\naX + b = 0");
	printf("\nNhap a,b:");
	printf("\na= "); scanf("%d",&a);
	printf("\nb= "); scanf("%d",&b);
	//PROCESS
	//OUTPUT
	if (a==0)
	{
		if (b==0) printf("\nPT VSN");
		else printf("\nPT VN"); //b#0
	}
	else //a#0
	{
		x= float (-b) / a;
		printf("\nX= %f",x);
	}
	getch();
}





