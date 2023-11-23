#include"stdio.h"
#include"conio.h"
   int main()
   {
   
    int n,i;
    printf("nhap so km n:");
    scanf("%d",&n);
    if(n<1)i=n*13000;
    if(1<n<30)i=13000+((n-1)*12000);
    if(n>30)i=13000+(12000*29)+((n-30)*11000);
    printf("so tien taxi la %d",n);
    getch();
    return 0;
    
   }







