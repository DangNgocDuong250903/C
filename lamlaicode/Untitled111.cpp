#include <stdio.h>
#include <conio.h>
using namespace std;
int main(){
	int s=0,n;
	
	printf("Nhap n:"); scanf("%d",&n);
	for(int i=2;i<n;i++)
	if(n%i==0){
		s+=i;
	}
	printf("USN n: %d",s);
	getch();
}

