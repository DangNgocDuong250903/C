#include <stdio.h>
#include <conio.h>
using namespace std;
int main() {
	//init
	char ht[100]; int s=0;
	//input: ht
	printf("ho ten: "); gets(ht);
	//process
	for (int i=0; ht[i]!='\0'; i++) 
		if (ht[i]=='u' || ht[i]=='e' || ht[i]=='o' || ht[i]=='a' || ht[i]=='i') s++;
	//output: x
	printf("\nSo nguyen am: %d",s);
}
