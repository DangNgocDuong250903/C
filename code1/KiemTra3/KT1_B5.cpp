#include <stdio.h>
#include <conio.h>
using namespace std;

int main() {
	//init
	FILE *f; int n,m,s=0;
	//input: F
	f= fopen("TAPTIN.txt","rt");
	//process: tong dong 2
	if (f==NULL) printf("LOI");
	else {
		fscanf(f,"%d",&n);
		for (int i=1; i<=n; i++) {
			fscanf(f,"%d",&m); s+=m;
		}
	}
	fclose(f);
	//output: S
	printf("Tong: %d",s);
}

