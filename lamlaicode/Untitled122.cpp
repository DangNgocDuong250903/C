#include <stdio.h>
#include <conio.h>
using namespace std;
struct hs{
	char ten[20];
	int namsinh;
	float tb;
};

int main()
{
	hs a[100]; int n;
	FILE *F;
	F= fopen ("hocsinh.dat","wb");
	if (F==NULL) printf ("LOI!");
	else {
		printf ("nhap n:"); scanf ("%d",&n);
		for (int i=0;i<n;i++){
			printf ("\nnhap ten:");fflush(stdin); gets (a[i].ten);
			printf ("\nnhap nam sinh:"); scanf ("%d",a[i].namsinh);
			printf ("\nnhap diem tb:"); scanf ("%f",a[i].tb);
		}
					fwrite (a[i],sizeof(a[i]),1,F);

	}
	fclose (F);
}
