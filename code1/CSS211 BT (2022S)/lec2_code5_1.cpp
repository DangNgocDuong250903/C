#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	//INIT
	int n=4,m=6,s1;
	float a=3.14, b=2.5;
	float s2;
	
	//PROCESS & OUTPUT
	s1= m/n; 
	printf("\n s1= %d",s1); //  dau / lay phan nguyen

	s1= m%n;
	printf("\n s1= %d",s1); //  dau / lay phan du

	s2= float (m) / n;   //*********cach ep kieu float (bien)
	printf("\n s2= %f",s2); //  chia ra float

	s2= a/b;   //*********cach ep kieu float (bien)
	printf("\n s2= %f",s2); //  chia ra float

	getch();
}





