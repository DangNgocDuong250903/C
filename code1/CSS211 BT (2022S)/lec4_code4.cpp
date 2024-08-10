#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	//INIT
	int a,b,c,dt; float x1,x2;
	//INPUT
	printf("\nCT giai PT bac 2\naX^2 + bX + c = 0");
	printf("\nNhap a,b:");
	printf("\na= "); scanf("%d",&a);
	printf("\nb= "); scanf("%d",&b);
	printf("\nc= "); scanf("%d",&c);
	//PROCESS
	//OUTPUT
	if (a==0) printf("\nPT bac 1.");
	else //a#= => PT B2
	{
		dt=b*b-4*a*c;
		if (dt==0)
		{
			x1=-b/2/a; //-b/(2*a)
			printf("\nx1=x2= %f",x1);
		}
		else //dt#0
		{
			if (dt<0) printf("\nPT VN.");
			else //dt>0
			{
				x1= (-b+sqrt(dt))/2/a;
				x2= (-b-sqrt(dt))/2/a;
				printf("\nx1= %f, x2=%f",x1,x2);
			}
		}
	}
	getch();
}





