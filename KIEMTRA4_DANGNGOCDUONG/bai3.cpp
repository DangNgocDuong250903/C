#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

	
	

int main(){
	int n,m,i=1;
	printf("n="); scanf("%d",&n);
	while(n!=0){
		m+=n%2*i;
		i*=10;
		n/=2;
		
}
	printf("%d",m);
	getch();
}
