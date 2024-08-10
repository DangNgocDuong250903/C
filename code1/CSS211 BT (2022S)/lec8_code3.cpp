#include <stdio.h>
#include <conio.h>
using namespace std;

void nhapsoduong(int &n) {
	do {
		printf("n= "); scanf("%d",&n);
	} while (n<=0);
} 

int main()
{
	int a;
	nhapsoduong(a);
	
	printf("a= %d",a);
	getch();
}




