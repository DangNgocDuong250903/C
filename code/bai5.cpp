#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
    float a,b; 
    printf("DANG NGOC DUONG\n GIAI ax+b=0\n");
    printf("Nhap he so a:"); scanf("%f",&a);
    printf("Nhap he so b"); scanf("%f",&b);
    if(a==0)
     if(b==0) printf("Vo so No");
     else printf("Vo No");
     else printf("x = %.2f",-b/a);
    getch();

}