#include <Stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
	int KTSHT(int x){
		int s=0,kt=0;
		for(int i=1;i<x;i++)
			if(x%i==0)	s+=i;
			if(s==x) kt=1;
		return kt;
		
	}
int main(){
	//INIT
	int x,KT;
	//INPUT
	printf("Nhap n: "); scanf("%d",&x);
	//OUTPUT
	KT=KTSHT(x);
	if(KT==0)
		printf("Khong la so hoan thien");
	else printf(" la so hoan thien");
	getch();	
}
