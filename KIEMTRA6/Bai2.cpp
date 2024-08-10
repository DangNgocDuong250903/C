#include <stdio.h>
#include <conio.h>
using namespace std;
		int demkt(char st[]) {
		int i;
		for (i=0; st[i]!='\0'; i++);
		return i;
	}
		int main(){
		int n; char st[50];
		printf("Nhap vao ten: "); gets(st);
		n=demkt(st);
		printf("n=%d\n",n);
		for (int i=n; i>=0; i--) printf("%c",st[i]);
		
	
	getch();
}