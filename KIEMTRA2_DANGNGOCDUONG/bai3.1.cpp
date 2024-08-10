#include <stdio.h>
#include <conio.h>
using namespace std;
void nhapM(int m[],int &n){
	printf ("\nnhap so phan tu: "); scanf ("%d",&n);
	for (int i=0;i<n;i++){
		printf ("nhap [%d]: ",i);scanf ("%d",&m[i]);
	}
}
void xuat(int m[], int n){
    printf("Mang vua nhap la: \n");
    for(int i=0;i<n;i++){
        printf("%5d",m[i]);
    }
}
int main()
{
	//init
	int m[100],n;
	//input
	nhapM(m,n);
	//process
	//output
    xuat(m,n);
	getch();
}
