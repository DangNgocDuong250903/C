#include <stdio.h>
#include <conio.h>
using namespace std;

int main() {
	//init
	char st[100]; int i=0, dem=0;
	//input
	printf("ST= "); gets(st);
	//process
	while (st[i]!='\0') {
		switch (st[i]) {
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
		}
		i++;
	}
	//output
	printf("SNA= %d",dem);
}






