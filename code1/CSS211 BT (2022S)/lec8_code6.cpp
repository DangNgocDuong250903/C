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
	int n,k; long long C;
	printf("k= "); scanf("%d",&k);
	printf("n= "); scanf("%d",&n);
	C= GiaiThua(n) / ( GiaiThua(k)*(GiaiThua(n-k)) );	
	printf("C= %lld",C);
	getch();
}





