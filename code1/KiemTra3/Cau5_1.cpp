#include <stdio.h>
#include <conio.h>
using namespace std;

int Tong(FILE *F) {
	int s=0,n,m;
	fscanf(F,"%d",&n);
	for (int i=1; i<=n; i++) {
		fscanf(F,"%d",&m);
		s+= m;
	}
	return s;
}

int main() {
	//INIT
	FILE *F; int s;
	//INPUT
	F=fopen("input.txt","rt");
	//PROCESS
	if (F==NULL) printf("Loi file roi nhe ban!");
	else s=Tong(F);
	fclose(F);
	//OUTPUT
	printf("\nS= %d",s);
}

