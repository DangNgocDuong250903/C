#include <stdio.h>
#include <conio.h>
#include <ctype.h>
using namespace std;

struct MangSTR {
	char s[100];
};
int main()
{
	//INIT
	FILE *F; char c; int i,n; MangSTR m[10];
	//INPUT
	F=fopen("THI_DU1.DAT","r");
	//PROCESS
	if (F==NULL) printf("Loi file roi nhe ban");
	else {
		//fscanf(F,"%d",&n);
		i=0;
		while (!feof(F))
		{ 
			fgets(m[i].s,80,F);
			i++;
		}	
		fclose(F);
	}
	//OUTPUT
	printf("%d\n",n);
	printf("%s\n",m[0].s);
	printf("%s\n",m[1].s);
	
	getch();
}



