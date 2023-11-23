#include"stdio.h"
#include"conio.h"
#include"math.h"
int main()
{
  int n,i,can;
  printf("nhap n:");scanf("%d",&n);
  i=(int)sqrt(n);
  if(n==i*i)printf("%d la so chinh phuong",n);
  else printf("%d khong la so chinh phuong",n);
  getch();
  return 0;
  
}
