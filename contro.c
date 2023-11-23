#include"stdio.h"
#include"conio.h"
#include"string.h"//gom cac ham xu ly chuoi
void swap(int *a, int *b){
   int temp;
   *a=temp;
   *a=*b;
   *b=temp;
}
void nhap(int *n){
   printf("\nnhap n=");scanf("%d",n);
}
int main()
{
  int a=70,b=90,n;
  swap(&a,&b);
  printf("a=%d,b=%d",a,b);
  nhap(&n);
  printf("n=%d",n);
  getch();
  return 0;
}
