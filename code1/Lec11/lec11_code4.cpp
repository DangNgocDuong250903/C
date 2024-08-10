#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	//INIT
	int a,b,c,dt; float x1,x2; FILE *F;
	//INPUT
	F=fopen("GPTB2.DAT","w");
	//PROCESS
	if (F==NULL) printf("Loi file roi nhe ban");
	else
	{
		printf("\nCT giai PT bac 2\naX^2 + bX + c = 0");
		fprintf(F,"CT giai PT bac 2\naX^2 + bX + c = 0\n");
		printf("\nNhap a,b:");
		printf("\na= "); scanf("%d",&a); fprintf(F,"%d\n",a);
		printf("\nb= "); scanf("%d",&b); fprintf(F,"%d\n",b);
		printf("\nc= "); scanf("%d",&c); fprintf(F,"%d\n",c);
		if (a==0) 
		{
			printf("\nPT bac 1.");
			fprintf(F,"PT bac 1.");
		}
		else //a#= => PT B2
		{
			dt=b*b-4*a*c;
			if (dt==0)
			{
				x1=-b/2/a;
				printf("\nx1=x2= %f",x1);
				fprintf(F,"x1=x2= %f",x1);
			}
			else //dt#0
			{
				if (dt<0) 
				{
					printf("\nPT VN.");
					fprintf(F,"PT VN.");
				}
				else //dt>0
				{
					x1= (-b+sqrt(dt))/2/a;
					x2= (-b-sqrt(dt))/2/a;
					printf("\nx1= %f, x2=%f",x1,x2);
					fprintf(F,"x1= %f, x2=%f",x1,x2);
				}
			}
		}
		fclose(F);
	}
	getch();
}





