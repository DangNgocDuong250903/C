#include <iostream>

using namespace std;

void NHAPMANG(int a[], int &n);
int TONGAM(int a[], int n);

int main() 
{
	int a[100], n, s;
	//INPUT
	NHAPMANG(a,n);
	//PROCESS
	s= TONGAM(a,n);
	//OUTPUT
	cout << "s= " << s;
}

void NHAPMANG(int a[], int &n) {
	cout << "n= "; cin >> n;
	for	(int i=0; i<n; i++) {
		cout << "a[" << i << "]= "; cin >> a[i];
	}
}

int TONGAM(int a[], int n) {
	int s=0;
	for	(int i=0; i<n; i++)
		if (a[i]<0) s+= a[i];
	return s;	
}

