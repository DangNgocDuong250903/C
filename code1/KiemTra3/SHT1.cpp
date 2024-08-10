#include <stdio.h>
#include <conio.h>
using namespace std;

int KTSHT(int X) {
	int S=0, KT=0; //gia su X ko la SHT
	for (int i=1; i<X; i++)
		if (X%i==0) S+=i;
	if (S==X) KT=1; //KT=1: X la SHT
	return KT;
}

int main() {
	//init
	int X, KT;
	//input: X
	printf("X= "); scanf("%d",&X);
	//process:
	KT=KTSHT(X);
	//output:
	if (KT==0) printf("%d khong phai so hoan thien",X);
	else printf("%d la so hoan thien",X);
}






