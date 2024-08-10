#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
int a,b,c,d,e,max;
printf("DANG NGOC DUONG\n TIM SO LON NHAT TRONG 5 SO NGUYEN");
printf("\nNhap vao so nguyen thu nhat:"); scanf("%d",&a);
printf("\nNhap vao so nguyen thu hai:"); scanf("%d",&b);
printf("\nNhap vao so nguyen thu ba:"); scanf("%d",&c);
printf("\nNhap vao so nguyen thu tu:"); scanf("%d",&d);
printf("\nNhap vao so nguyen thu nam:"); scanf("%d",&e);
 max= a;
if(b>max) max = b;
if(c>max) max = c;
if(d>max) max = d;
if(e>max) max = e;
printf("Gia tri lon nhat la: %d",max);
getch();
}