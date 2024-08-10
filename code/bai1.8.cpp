#include <stdio.h>
#include <conio.h>
using namespace std;
int main(){ 
int R; float C,S;
//INPUT
printf("Tinh chu vi va dien tich hinh tron\n");
printf("Nhap R:" ); scanf("%d",&R);
//PROCESS
C=2*R*3.14;
S=R*R*3.14;
//OUTPUT
printf("C = 2x%dxPI= %f\n",R,C);
printf("S = %dx%dxPI= %f\n",R,R,C);


}
