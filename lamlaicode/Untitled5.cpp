#include <stdio.h>
#include <conio.h>
using namespace std;
int main(){
	int n1,n,s=0;
	printf("Nhap n:  "); scanf("%d",&n1);
		n=n1;
		int i=1;
	while(n!=0){
		s+=n%2*i;
		i*=10;
		n/=2;
	}
	printf("%d = %d ",n1,s);
	
	getch();
}
