#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	int n;
	do{
		printf("\nNhap uoc so chan cua n > 0:"); scanf("%d",&n);
	
	}while(n<=0);
	
	printf("\nCac uoc so chan cua %d là:",n);
	int a=1,b=0;
	while(a<=n){
		if(n%a==0)
		{
			if(a%2==0)
			{
				printf("%3d",a);
				b++;
			}
			
		}
			a++;
	}
		
printf("\nUoc so chan cua %d là %d:",n,b);
getch ();
}

