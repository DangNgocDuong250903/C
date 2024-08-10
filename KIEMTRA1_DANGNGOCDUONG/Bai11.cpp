#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
	int GT(int n){
		int S=1;
		for(int i=1;i<=n;i++){ S*=i;
		}
		return S;
	}
	float Tinhs(int n){
		float S=0; int dau=1;
		for(int i=1;i<=n;i++){
			S+=float(i)/float(GT(i))*dau;
			dau=-dau;
		}
		return S;
	}
int main(){
	//INIT
int n; float S;	
//INPUT
printf("Chuong trinh tinh S\n");
printf("Nhap n: "); scanf("%d",&n);
//PROCESS
S= Tinhs(n);
//OUTPUT
printf("S= %f",S);
getch ();
}
