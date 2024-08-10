#include <stdio.h>
#include <conio.h>
using namespace std;

void Nhap HS(charp[],int n){
	FILE*F;	Hocsinh a;
	F=fopen(p,"wb");
	if(F==NULL) printf("Loi");
	else{	
	for(int i=0;i<=n;i++){
	printf("\nHoc sinh thu: %d:\n",i);
	fflush(stdin);	
	printf("Nhap ho ten: "); gets(a.ten);
	printf("\nNhap namsinh: "); scanf("%d",&a.ns);
	fwrite(&ds,sizeof(a),1,F);
}
}
}
void xuatHS2002(char p[]){
	FILE*F; hocsinh a;
	F=fopen(p,"rb");
	if(F==NULL) printf("Loi F");
	else{
	printf("\nHoTen \t\t Namsinh \n");
	while(!feof(F)){
		fread(&a,sizeof(a),1,F);
		if(!feof(F) && a.ns==2002)
		printf("%s \t %d\n",a.ten,a.ns);
		}
	}
}
	fclose(F);
	int main(){
	

	getch();	
}