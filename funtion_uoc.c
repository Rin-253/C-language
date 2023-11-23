#include"stdio.h"
#include"conio.h"
void lietkeUocso(int n);

void lietkeUocso(int n)
{
 int i;
 for(i=1;i<=n;i++)
   if(n%i==0)printf("\t %d",i);
}
 int main()
 {
 int n=100;
 lietkeUocso(n);
 getch();
 return 0;
 }
