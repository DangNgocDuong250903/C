#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
    int a,b;
    printf("DANG NGOC DUONG");
    printf("\nNhap so nguyen 1:");
    scanf("%d",&a);
    printf("Nhap so nguyen 2:");
    scanf("%d",&b);
    printf("Tong = %d + %d = %d",a,b,a+b);
    printf("\nHieu = %d - %d=%d",a,b,a-b);
    printf("\nTich = %d * %d = %d",a,b,a*b);
    printf("\nThuong = %d : %d = %.2f",a,b,1.0*a/b);
    getch();
}