#include <stdio.h>
#include <conio.h>
using namespace std;

struct sinhvien {
	char ten[10]; //mang CHAR <=> STRING
	int namsinh;
};

int main()
{
	printf("Nhap va Xuat thong tin sinh vien a \n");
	//INIT
	sinhvien a;
	//INPUT
	fflush(stdin);
	printf("Ho ten: "); scanf("%s",&a.ten);
	printf("Nam sinh: "); scanf("%d",&a.namsinh);
	//PROCESS
	//OUTPUT
	printf("\nSTT \t Ho ten \t Nam sinh \n");
	printf("1 \t %s \t\t %d",a.ten,a.namsinh);
	
	getch();
}



