#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;
void nhapmang(float a[], int &n)
{
     printf("\nNhap vao phan tu: ");
        scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}
float tongam1(float a[], int n)
{
    float s = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0) s += a[i];
    }
    return s;
}
int main()
{  
	//INIT
    int n; float tongam,a[100];
    //INPUT
    nhapmang(a,n);
    //PROCESS
    tongam=tongam1(a,n);
    printf("\nTong các so âm trong mang là: %f", tongam);
    getch ();
}
