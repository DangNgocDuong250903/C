#include <stdio.h>
#include <conio.h>
using namespace std;

int DemNA(char ht[]) {
	int s=0;
	//chuoi chay tu 0, ky tu cuoi cung cua chuoi la '\0'
	for (int i=0; ht[i]!='\0'; i++) 
		if (ht[i]=='u' || ht[i]=='e' || ht[i]=='o' || ht[i]=='a' || ht[i]=='i') s++;
	return s;	
}

int main() {
	//init
	char ht[100]; int s;
	//input: ht
	printf("ho ten: "); gets(ht);
	//process
	s=DemNA(ht);
	//output: s
	printf("\nSo nguyen am: %d",s);
}
