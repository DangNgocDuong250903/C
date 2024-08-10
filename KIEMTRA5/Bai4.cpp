#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	//init
	char st[100];
	int d=0,y=0;
	//input
	printf ("\nnhap :");gets(st);
	//process
	while (st[y]!='\0'){
		if (st[y]=='u'||st[y]=='U'||st[y]=='e'||st[y]=='E'||st[y]=='o'||st[y]=='O'||st[y]=='a'||st[y]=='A'||st[y]=='i'||st[y]=='I')
		{
		d++;
		y++;
		}
	}
	//output
	printf ("%d",d);
	getch();
}