#include <stdio.h>
#include <conio.h>
using namespace std;
int main(){
	int a,b; char pheptoan; float kq;
	printf("CHUONG TRINH MAY TINH DIEN TU");
	printf("\nNhap vao a:"); scanf("%d",&a);
	printf("Nhap vao b:"); scanf("%d",&b);
	fflush(stdin);
	printf("Nhap vao phep toan:"); scanf("%c",&pheptoan);
	switch (pheptoan) {
		case '+' :
			kq = a+b;
			break;
			case '-' :
				kq = a-b;
				break;
				case '*' :
					kq = a*b;
				    break;
					case '/':
						kq = float(a)/b;
					
					     break;
					}
			
	printf("\n %d %c %d = %f",a,pheptoan,b,kq);
	getch();
	}

