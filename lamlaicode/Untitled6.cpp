#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
		char st[100]; int b=0;
	printf("Nhap ten: "); gets(st);
	for(int i=0;st[i]!='\0';i++){
	if(st[i]=='u'|| st[i]=='e' || st[i]=='o' || st[i]=='a' || st[i]=='i'){
		
	b++;
	}
}
printf("dem: %d",b);
getch();
}
