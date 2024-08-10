#include <stdio.h>
#include <conio.h>
using namespace std;

int demkt(char st[]) {
	int i;
	for (i=0; st[i]!='\0'; i++);
	return i;
}

int main() {
	//init
	char st[30]; int n;
	//input
	printf("Nhap chuoi: "); gets(st);
	//process
	n=demkt(st);
	//output
	printf("n=%d\n",n);
	for (int i=n; i>=0; i--) printf("%c",st[i]);
}
	

