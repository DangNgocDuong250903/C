#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	int x,m[100],n=-1;
	printf("x= "); scanf("%d",&x);
	while(x!=0){
		n++;
		m[n]=x%2;
		x/=2;
	}
	for (int i=n;i>=0;i--) printf("%d",m[i]);
}