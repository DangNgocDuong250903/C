#include <stdio.h>
#include <conio.h>
using namespace std;
	int TONG(FILE*f){
		int s=0,n,m;
		fscanf(f,"%d",&n);
		while(!(feof(f))){
		fscanf(f,"%d",&m); s+=m;
	}
		return s;
	}
int main(){
	//init
	FILE*f; int n,m,s=0;
	//input: F
	f=fopen("TAPTIN.txt","r");
	if(f==NULL) printf("LOI");
	else{
		s=TONG(f);
		}
	fclose(f);
	printf("Tong: %d",s);
	getch();
}