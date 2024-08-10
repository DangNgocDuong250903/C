#include <stdio.h>
#include <conio.h>
using namespace std;

int GiaiThua(int n) {
  int s=1;
  for (int i=1; i<=n; i++) s*=i;
  return s;	
}

int main()
{
	int n, nGT;
	printf("n= "); scanf("%d",&n);
	nGT= GiaiThua(n);	
	printf("%d!= %d",n,nGT);
	getch();
}





