#include <stdio.h>
#include <conio.h>
using namespace std;

struct sinhvien {
	char ten[10]; //mang CHAR <=> STRING
	int namsinh;
};

sinhvien nhap() {
	sinhvien x;
	fflush(stdin);
	printf("Ten: "); scanf("%s",&x.ten);
	printf("Nam sinh: "); scanf("%d",&x.namsinh);
	return x;
}
void xuat(sinhvien x) {
	printf("%s \t %d \n",x.ten,x.namsinh);
}
void nhapmang(sinhvien m[], int n) {
	for (int i=0; i<n; i++) {
		printf("Nhap sinh vien thu %d: \n",i);
		m[i]=nhap();
	}
}
void xuatmang(sinhvien m[], int n) {
	for (int i=0; i<n; i++) xuat(m[i]);
}
int main()
{
	//INIT
	sinhvien m[100]; int n; //m[i] la 1 sinhvien
	//INPUT
	printf("n= "); scanf("%d",&n); //n la so sinh vien can nhap
	nhapmang(m,n);
	//PROCESS
	//OUTPUT
	printf("\nTen \t Nam sinh \n");
	xuatmang(m,n);
	
	getch();
}



