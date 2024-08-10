#include <stdio.h>
#include <conio.h>
using namespace std;

	void Nhap(int a[],int n){
		printf("Nhap n: "); scanf("%d",&n);
		for(int i=0;i<n;i++)
		printf("a[%d]",i); scanf("%d",&a[i]);
	}
	void XuatMang(int a[], int n){
		for(int i=0;i<n;i++) 
		printf("%d\t",a[i]);
	}
	 int TongC3(int a[],int n){
	 	s=0;
	 	for(int i=0;i<n;i++)
	 	if(a[i]%3==0) s+=a[i];
	 }
	 int SHT(int x){
	 	int s=0,kt=0;
	 	for(int i=1;i<n;i++)
	 	if(x%i==0) s+=i;
	 	if(s==x) kt=1;
	 	return kt;
	 }
	 int TONGSHT(int a[],int n){
	 	int s=0;
	 	for(int i=1;i<n;i++){
	 		if(SHT(a[i]==1)) s+=a[i];
	 		return s;
		 }
	 }
int main(){
	int a[100],s1,s2,n;
	Nhap(a,n);
	s1=TongC3(a,n);
	s2=TONGSHT(a,n);
	printf("Tong chia het cho 3: %d",s1);
	printf("Tong SHT: %d",s2);
	getch();
}
