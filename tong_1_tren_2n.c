#include"stdio.h"
#include"conio.h"
#include"math.h"
int main()
{
  int n,i;
  float s;
  printf("nhap so n:");
  scanf("%d",&n);
  if(n>3){
  s=0;
  for(i=1;i<=n;i++){
    s=s+(float)i/(2*n);
    i=i+2;
  }
  printf("tong la %f",s);
  }
  else printf("moi ban nhap lai !!!!");
  getch();
  return 0;
  
}
