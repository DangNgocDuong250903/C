#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
    int a,b,c,d;
    printf("DANG NGOC DUONG");
    printf("\nNhap phan so 1:");
    printf("\nTu:"); scanf("%d",&a);
    printf("\nMau<>0:"); scanf("%d",&b);
    printf("Nhap phan so 2:"); 
    printf("\nTu:"); scanf("%d",&c);
    printf("\nMau<>0:"); scanf("%d",&d);
    printf("\nTong = %d/%d + %d/%d",a,b,c,d,a*d+b*c,b*d);
    printf("\nHieu = %d/%d - %d/%d",a,b,c,d,a*d-b*c,b*d);
    printf("\nTich = %d/%d * %d/%d",a,b,c,d,a*d*b*c,b*d);
    printf("\nThuong = %d/%d / %d/%d",a,b,c,d,a*d,b*c,b*d);
    getch();

}