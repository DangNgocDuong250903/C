#include <stdio.h>
#include <conio.h>
using namespace std;

int main() {
	//INIT
	FILE *F; int n,s=0,m;
	//INPUT
	F=fopen("input.txt","rt");
	//PROCESS
	if (F==NULL) printf("Loi file roi nhe ban!");
	else 
	{
		fscanf(F,"%d",&n);
		for (int i=1; i<=n; i++) {
			fscanf(F,"%d",&m);
			s+= m;			
		}
		fclose(F);
	}
	//OUTPUT
	printf("\nS= %d",s);
}

