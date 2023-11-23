#include"stdio.h"
#include"conio.h"
   int main()
   {
   	float x,s;
     int y,i;
     printf("nhap so x:");scanf("%f",&x);
     
     do{
     	printf("nhap so y:");
     	scanf("%d",&y);
     	}while(y<0);
     s=1;
     for(i=1;i<=y;i++)s=s*x;
     printf("so can tim la %f",s);
     getch();
     return 0;
     
   
   }
   
   
