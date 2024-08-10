#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	//INIT
	char a='x';
	//INPUT
	//PROCESS
	printf("\na= %c",a);
	switch (a)
	{
		case 'x': //a='x'
			printf("\nX");
		case 'y': //a='y'
			printf("\nY");
		default: //n!=x,y	
			printf("\nKHAC");
	}
	//OUTPUT

	getch();
}





