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
		int i=0;
		while (!feof(F)) {
			i++;
			fgets(s,80,F);
			printf("%d: %s\n",i,s);
		}
		fclose(F);
	}
	//OUTPUT
	getch();
}



