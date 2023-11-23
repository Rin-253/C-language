#include"stdio.h"
#include"conio.h"
#include"math.h"
int main()
{
  int n,i;
  float s;
  printf("nhap so n:");
  scanf("%d",&n);
  s=0;
  for(i=1;i<=n;i++){
    s=s+(float)1/n;
  }
  printf("tong la %f",s);
  getch();
  return 0;
  
}

