#include <Stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	char st[100]; int i=0,dem=0;
	printf("Nhap ten: "); gets(st);
	while (st[i]!='\0'){
		switch(st[i]){
			case 'u':
			case 'U':
			case 'e':
			case 'E':
			case 'o':
			case 'O':
			case 'a':
			case 'A':
			case 'i':
			case 'I': dem++;
		} i++;
	}
	printf("%d",dem);
	getch();
}