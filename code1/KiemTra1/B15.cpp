#include <iostream>

using namespace std;

struct HS {
	char ten[15];
	int ns;
	float dtb;
};

int main() 
{
	HS a[100]; int n; FILE *f;
	//INPUT
	cout << "n= "; cin >> n;
	for (int i=0; i<n; i++) {
		cout << "Ten: "; fflush(stdin); gets(a[i].ten);
		cout << "NS: "; cin >> a[i].ns;
		cout << "DTB: "; cin >> a[i].dtb;
	}
	//PROCESS
	f= fopen("D:\\hs.dat","wb");
	if (f==NULL) cout << "LOI";
	else {
		for (int i=0; i<n; i++) {
			fwrite(&a[i],sizeof(a[i]),1,f); 
		}
	}
	fclose(f);
	//OUTPUT
}
