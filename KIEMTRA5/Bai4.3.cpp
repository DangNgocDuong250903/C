#include <Stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int Demskt(char st[]){
	int i;
	for(int i=0;st[i]!='\0';i++);
	return i;
}
int main(){
	char st[100];
	printf("Nhap ten: "); gets(st);
	Demskt(st);
	getch();
}