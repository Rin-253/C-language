#include"stdio.h"
#include"conio.h"
int f(int n);

int f(int n)
{
  if(n<0){ return -1;
  }
  else
  	if(n==0||n==1) {return n;
  }
  else{
  	return f(n-1)+f(n-2);
  }
}

int main()
{
  int n,i;
  printf("nhap n=");scanf("%d",&n);
  printf("so hang thu %d cua day la : %d ",n,f(n));
  getch();
  return 0;
}


