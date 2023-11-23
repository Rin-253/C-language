#include"stdio.h"
#include"conio.h"
#include"math.h"
int nto(int n);
 int main()
 {
   int n;
    printf("nhap n:");
    scanf("%d",&n);
    printf("\n%d la so nguyen to",nto(n));
    getch();
    return 0;
  
 }
 int nto(int n){
    int i;
    for(i=2;i<=n-1;i++){
    if(n%i==0) return 0;
    else return 1;
    //1 la so nguyen to, 0 khong la so nguyen to
    }
 }
