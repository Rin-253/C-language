#include"stdio.h"
#include"conio.h"
int giaithua(int n);
 int main()
 {
 	int n;
 	 printf("nhap so n:");scanf("%d",&n);
 	 printf("giai thua cua so %d la %d",n,giaithua(n));
 	 getch();
 	 return 0;
 		
}
int giaithua(int n){
   int i, gt=1;
   for(i=1; i<=n; i++)gt=gt*i;
   return gt;
}
