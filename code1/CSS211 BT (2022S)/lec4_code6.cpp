#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	//INIT
	int dd=31,mm=12,yy=2000, dd0, dd1, mm1, yy1, dd2, mm2, yy2;

	//INPUT

	//PROCESS
	if (mm==4 || mm==6 || mm==9 || mm==11) dd0=30;
	else if (mm==2) dd0=28+yy%4;
	     else dd0=31;

	dd1=dd; mm1=mm; yy1=yy;
	dd1=1+dd1%dd0;
	if (dd1==1) mm1= 1+mm1%12;
	if (dd1==1 && mm1==1) yy1= yy1+1;

	//OUTPUT
	printf("\nNGAY      :  %d/%d/%d",dd,mm,yy);
	printf("\nNGAY MAI  :  %d/%d/%d",dd1,mm1,yy1);

	getch();
}





