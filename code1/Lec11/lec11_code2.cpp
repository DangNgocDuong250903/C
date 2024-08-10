#include <stdio.h>
#include <conio.h>
#include <ctype.h>
using namespace std;

int main()
{
	//INIT
	FILE *F; char c; int n=10;
	//INPUT
	F=fopen("THI_DU1.DAT","w");
	//PROCESS
	if (F==NULL) printf("Loi file roi nhe ban");
	else {
		fprintf(F,"S1= %d\n",n+1);
		fprintf(F,"S2= %d",n+2);
		fclose(F);
	}
	//OUTPUT
	getch();
}



