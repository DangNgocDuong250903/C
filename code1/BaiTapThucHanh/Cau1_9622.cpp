#include <stdio.h>
#include <conio.h>
using namespace std;

struct hocsinh {
	char ten[30];
	int ns;
};

void NhapHS(char p[], int n) {
	FILE *f; hocsinh a;
	f=fopen(p,"wb");
	if (f==NULL) printf("LOI FILE");
	else {
		for (int i=1; i<=n; i++) {
			printf("\nHoc sinh thu %d:\n",i);
			fflush(stdin);
			printf("Ho ten: "); gets(a.ten);
			printf("Nam sinh: "); scanf("%d",&a.ns);
			fwrite(&a,sizeof(a),1,f);
		}
		fclose(f);
	}
}

void XuatHS(char p[]) {
	FILE *f; hocsinh a;
	f=fopen(p,"rb");
	if (f==NULL) printf("LOI FILE");
	else {
		printf("\nHo ten \t\t Nam sinh \n");
		while (!feof(f)) {
			fread(&a,sizeof(a),1,f);
			if (!feof(f)) printf("%s \t %d\n",a.ten,a.ns);
		}
		fclose(f);
	}
}

void XuatHS2002(char p[]) {
	FILE *f; hocsinh a;
	f=fopen(p,"rb");
	if (f==NULL) printf("LOI FILE");
	else {
		printf("\nHo ten \t\t Nam sinh \n");
		while (!feof(f)) {
			fread(&a,sizeof(a),1,f);
			if (!feof(f) && a.ns==2002) printf("%s \t %d\n",a.ten,a.ns);
		}
		fclose(f);
	}
}

int main() {
	//init
	int n;
	//input
	printf("n= "); scanf("%d",&n);
	NhapHS("hocsinh.dat",n);
	//process
	//output
	XuatHS("hocsinh.dat");
	XuatHS2002("hocsinh.dat");
}
	

