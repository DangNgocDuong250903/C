#include <stdio.h>
#include <conio.h>
using namespace std;

int DemSKT(char st[]) {
	int i;
	for (i=0; st[i]!='\0';i++);
	return i;
}
int main() {
	//init
	char st[100];
	//input
	printf("ST= "); gets(st);
	//process
	//output
	printf("DEM= %d",DemSKT(st));
}






