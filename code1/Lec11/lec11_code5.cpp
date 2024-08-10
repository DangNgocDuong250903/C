#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
	//INIT
	FILE *F; int n;
	F=fopen("Lec11_Code5.txt","w");
	//INPUT
	printf("n= "); scanf("%d",&n);	
	//PROCESS
	if (F==NULL) printf("Loi file roi nhe ban");
	else 
	{
		for (int i=1; i<=n; i++) fprintf(F,"%d ",i);		
		fclose(F);
	} //NGUYEN SY KHAI

	F=fopen("Lec11_Code5.txt","r");
	if (F==NULL) printf("Loi file roi nhe ban");
	else 
	{
		while (!feof(F)) {
			fscanf(F,"%d",&n);
			if (!feof(F)) printf("%d ",n);
		}		
		fclose(F);
	}

	
	//OUTPUT
	getch();
}



