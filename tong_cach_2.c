#include"stdio.h"
#include"conio.h"
   int main()
   { 
   int n,i;
   float s;
    printf("nhap n:");scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++)s=s+(float)i/(i+1);
    printf("tong la %f",s);
    getch();
    return 0;
   
   }
    
  
