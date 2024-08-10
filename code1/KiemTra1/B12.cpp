#include <iostream>

using namespace std;

int NHAPN();
float TBC();

int main() 
{
	float s;
	//INPUT
	//PROCESS
	s= TBC();
	//OUTPUT
	cout << "s= " << s;
}

int NHAPN() {
	int n;
	do {
		cout << "n= "; cin >> n;
	} while (n<0);
	return n;
}

float TBC() {
	int n, dem=0; float tb=0; int s=0;
	do {
		n= NHAPN();
		if (n!=0) { 
			s+=n; dem++;
		}
	} while (n!=0);
	tb= (float) s/dem;
	return tb;
}

