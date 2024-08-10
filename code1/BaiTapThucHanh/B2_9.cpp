#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
	printf("GIAI PHUONG TRINH BAC 2 \n");
	//INIT
	int a,b,c,dt; float x1, x2;
	//INPUT
	printf("a= "); scanf("%d",&a);
	printf("b= "); scanf("%d",&b);
	printf("c= "); scanf("%d",&c);
	//PROCESS & OUTPUT
	if (a==0) printf("PT Bac 1, khong giai nhe!");
	else {
		dt=b*b-4*a*c;
		if (dt==0) { //nghiem kep
			x1=-b/2/a;
			printf("Nghiem kep\n x1=x2=%f",x1);
		}
		else {
			if (dt<0) { //vo nghiem
				printf("PT VO NGHIEM NHE \n");
			}
			else { //2 nghiem
				x1=-b-sqrt(dt)/2/a;
				x2=-b+sqrt(dt)/2/a;
				printf("2 Nghiem\n x1=%f \n x2=%f",x1,x2);
			}
		}
	}
	//OUTPUT
	getch();
}

