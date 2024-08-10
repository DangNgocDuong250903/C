#include <stdio.h>
#include <conio.h>
using namespace std;
int main(){
	//init
	FILE*F; int n,m,s=0;
	//input: F
	F=fopen("TAPTIN.txt","rt");
	if(F==NULL) printf("LOI");
	else{
		fscanf(F,"%d",&n);
		for(int i=1;i<=n;i++){
		fscanf(F,"%d",&m); s+=m;
		}
	}
	
	fclose(F);
	//output
	printf("Tong: %d",s);
	getch();
}