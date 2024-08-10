#include <stdio.h>
#include <conio.h>
using namespace std;
int main(){
	int s=0,n;
	printf("VIET PT TINH TONG DAY SO");
	printf("\nNhap N: "); scanf("%d",&n);
	for(int i=0;i<=n;i++){
	  s=s+i*i;	
	}
	printf("s=%d",s);
	getch ();
	}
