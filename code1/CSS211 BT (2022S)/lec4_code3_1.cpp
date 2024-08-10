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
	switch (a)
	{
		case 0:
			switch(b)
			{
				case 0:
					printf("\n PT VSN.");
					break;
				default: //b#0
					printf("\n PT VN.");	
			}
			break;
		default://a#0
			x= float (-b) / a;
			printf("\nX= %f",x);
	}

	getch();
}





