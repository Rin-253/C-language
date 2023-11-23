#include"stdio.h"
#include"conio.h"
int main ()
{
	int a,b,c,tong;
	printf(" nhap vao abc :");
	scanf("%d%d%d",&a,&b,&c);
	tong = a*a*a+b*b*b+c*c*c;
	printf("tong cua 3 so là %d", tong );
	getch();
	return 0;
	
}
