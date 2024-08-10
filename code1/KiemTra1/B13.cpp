#include <iostream>

using namespace std;

int F(int A, int B);

int main() 
{
	int s;
	//INPUT
	//PROCESS
	s= F(9,12);
	//OUTPUT
	cout << "s= " << s;
}
//DE QUY
int F(int A, int B) {
	if (B==0) return A;
	else return F(B,A%B);
}

