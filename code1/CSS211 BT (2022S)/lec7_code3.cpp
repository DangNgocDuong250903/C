#include <stdio.h>
#include <conio.h>

using namespace std;

void PTB1(int a, int b) {
	float x;
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
}

int main()
{
	int a, b;
	printf("a= "); scanf("%d",&a);
	printf("b= "); scanf("%d",&b);
	PTB1(a,b,x);
	getch();
}



