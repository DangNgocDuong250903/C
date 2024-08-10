#include <stdio.h>
#include <conio.h>
#include <ctype.h>
using namespace std;

int main()
{
	//INIT
	FILE *F; char c;
	//INPUT
	F=fopen("THI_DU.TXT","w");
	//PROCESS
	if (F==NULL) printf("Loi file roi nhe ban");
	else {
		do {
			putc(toupper(c=getchar()),F);
		} while(c!='\n');
		fclose(F);
	}
	//OUTPUT
	getch();
}



