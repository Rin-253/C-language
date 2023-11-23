#include"stdio.h"
#include"conio.h"
void showchar(int n);

void showchar(int n)
{
 int r;
 while(n>9){
   r=n%10;
   printf("%d \n",r);
   n=n/10;
   }
    printf("%d \n",n);
}
 int main()
 {
 int n=95859;
 showchar(n);
 getch();
 return 0;
 }
