#include <stdio.h>
#include <conio.h>
#include <ctype.h>
using namespace std;

int main()
{
	//INIT
	FILE *F; int n; char s[100];
	//INPUT
	F=fopen("THI_DU1.DAT","r");
	//PROCESS
	if (F==NULL) printf("Loi file roi nhe ban");
	else 
	{
		fgets(s,80,F); //LAN 1
		printf("%s\n",s);
		fgets(s,80,F); //LAN 2
		printf("%s\n",s);

		fclose(F);
	}
	//OUTPUT
	getch();
}



