#include <iostream>

using namespace std;

int GIAITHUA(int n);
float TINHS(int n);

int main() 
{
	int n; float s;
	//INPUT
	cout << "n= "; cin >> n;
	//PROCESS
	s= TINHS(n);
	//OUTPUT
	cout << "s= " << s;
}

int GIAITHUA(int n) {
	int gt=1;
	for (int i=1; i<=n; i++) gt*= i;
	return gt;
}

float TINHS(int n) {
	float s=0; int dau=1;
	for (int i=1; i<=n; i++) { 
		s+= (float) i/GIAITHUA(i)*dau;
		dau=-dau;
	}
	return s;
}

