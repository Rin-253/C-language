#include"stdio.h"
#include"conio.h"
void swap(int a, int b)
{
 int temp;
 temp=a;a=b;b=temp;
 printf("trong ham a=%d ,b=%d",a,b);
}
 int main()
 {
 int a=9,b=10;
 swap(a,b);
 printf("  ngoai ham a=%d,b=%d",a,b);
 getch();
 return 0;
 }
