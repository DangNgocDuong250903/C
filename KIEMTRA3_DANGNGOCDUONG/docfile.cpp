#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i,tong=0;
    FILE *F=fopen("TAPTIN.doc","r");
    if(F==NULL){
           printf("\n Loi FILE!");
    }
    while(!feof(F))
    {
                   i=0;
                   fscanf(F,"%d",&i);
                   tong+=i;
    }
    fclose(F);
    printf("\nTong=%d",tong);
    getch();
    return 0;
}