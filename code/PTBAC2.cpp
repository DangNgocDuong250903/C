#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	float a,b,c,denta,x1,x2;
	printf("GIAI PT BAC 2");
	printf("Nhap a:"); scanf("%f",&a);
	printf("Nhap b:"); scanf("%f",&b);
	printf("Nhap c:"); scanf("%f",&b);
		
	if(a=0)   printf("PT BAC 1 KHONG GIAI");
	 else {
	  denta=b*b-4*a*c;
	if(denta>0){
		x1 = (-b+sqrt(denta)/(2*a));
		x2 = (-b-sqrt(denta)/(2*a));
		printf("Nghiem thu nhat:%d",x1);
		printf("Nghiem thu hai:%d",x2);
		}
		else if(denta==0){
			x1 = -b/2/a;
			printf("NGHIEM KEP X1=X2=%f",x1);
			}
			else
			{ printf("PT VO NGHIEM");
			}
			
		}
		getch ();
		}
