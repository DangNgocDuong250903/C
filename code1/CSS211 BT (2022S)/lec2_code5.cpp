#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	//INIT
	int n,m,s1; //int n=10;
	char c;  //char c='a';
	float a,s2; //float a=3.14;
	
	//INPUT

	printf("n= "); scanf("%d",&n);
	printf("m= "); scanf("%d",&m);
	fflush(stdin);  //xoa buffer ky tu
	printf("c= "); scanf("%c",&c);
	printf("a= "); scanf("%f",&a);
	
	//PROCESS & OUTPUT

	s1= m+n; printf("\ns1= m+n = %d",s1);
	s1= m++; printf("\ns1= m++ = %d",s1); //s=m++ => s=m;  m=m+1
	s1= ++m; printf("\ns1= ++m = %d",s1); //s=++m => m=m+1; s=m
	s1= m++ + n; printf("\ns1= m++ + n = %d",s1); //n=2,m=3 => s1=5
	s1= ++m + n; printf("\ns1= ++m + n = %d",s1); //n=2,m=3 => s1=6

	getch();
}





