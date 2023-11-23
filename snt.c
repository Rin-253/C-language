#include"stdio.h"
#include"conio.h"
int demsouoc(int n);
int nto(int n);
int demcsnt(int n);

int demsouoc(int n)
{
   int dem=0,i;
   for(i=1;i<=n;i++){
     if(n%i==0) dem++;
   }
    return dem;
    }
 int main()
 {
 int n=77589;
 printf("%d co %d chu so nguyen to",n,demcsnt(n));
 getch();
 return 0;
 }
 int nto(int n){
 if(demsouoc(n)==2)return 1;
 else return 0;
 }
 int demcsnt(int n){
   int r,dem=0;
   while(n>0){
     r=n%10;
     if(nto(r)==1)dem++;
     n=n/10;
   }return dem;
 }
