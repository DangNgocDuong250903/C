#include <stdio.h>
#include <conio.h>
using namespace std;
int main(){
	int n;
	do{
		printf("Nhap n: "); scanf("%d",&n);
	}while(n<0);
	int s=1; int i=1;
	while(i<n){
		i++;
		s+=i*i;
		
	}
	
	printf("%d",s);
	getch();
}
