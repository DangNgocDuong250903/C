#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;



int main(){

  int a=3,b=1,c=5,d=9;
   FILE *F;
   F = fopen("TAPTIN.doc","w");
 
   if(F == NULL)
   {
      printf("Error!");   
                  
   }
 	
   fprintf(F,"%d",a);
   fprintf(F,"\n%d %d %d",b,c,d);
   fclose(F);
 
   return 0;
}
 
	