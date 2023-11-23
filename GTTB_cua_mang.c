#include <stdio.h>
#include <conio.h>
#include <math.h>
#define maxD 100
#define maxC 50
void nhap(int a[][maxC],int m,int n);
void xuat(int a[][maxC],int m,int n);
double GTTB(int a[][maxC],int m,int n);
int main() {
	int a[maxD][maxC],m,n;
	printf("nhap phan tu cua mang :");scanf("%d",&n);
	nhap(a,m,n);
	printf("\ndanh sach cac phan tu cua mang la :\t");
	xuat(a,m,n);
	printf("\ngia tri trung binh cua mang la :",GTTB(a,m,n));
	getch();
	return 0;
}
void nhap(int a[][maxC],int m,int n){
  int i,j;
  for(i=0;i<m;i++){
   for(j=0;j<n;j++){
      printf("a[%d][%d]=",i,j);
      scanf("%d",&a[i][j]);
   }
  }
}
void xuat(int a[][maxC],int m,int n){
  int i,j;
  for(i=0;i<m;i++){
   for(j=0;j<n;j++){
   	printf("\t%d",&a[i][j]);
   	}
   	printf("\n");
  }
}

double GTTB(int a[][maxC],int m,int n){
   if(m<=0||n<=0)return 0;
     int i,j,s=0;
     for(i=0;i<m;i++){
     for(j=0;j<n;j++){
   	   s=s+a[i][j];
   	 }
   	 return s;
   	}
   double GTTB=0;
    GTTB=(double)s/(m*n);
    return GTTB;
}
