#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	int n,i=1,m=0;
	printf("Nhap M: "); scanf("%d",&n);
	while(n!=0){
		m+=n%2*i;
		i*=10;
		n/=2;
	}
	printf("%d",m);
	getch();
}
