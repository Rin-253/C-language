#include <stdio.h>
#include <conio.h>
#define maxD 100
#define maxC 50
void nhap(int a[][maxC],int m, int n);
void xuat(int a[][maxC],int m, int n);
int main()
{
  int a[maxD][maxC],m,n;
  printf("nhap cac phan tu :"); scanf("%d",&n);
  nhap(a,m,n);
  printf("danh sach cac phan tu cua mang");
  xuat(a,m,n);
  printf("tong cac phan tu tren duong cheo chinh la :");
  tongDCC(a,m,n);
  getch();
  return 0;
}

void nhap(int a[][maxC],int m, int n){
  int i,j;
  for(i=0;i<m;i++){
   for(j=0;j<n;j++){
     printf("a[%d][%d]=",i,j);
     scanf("%d",a[i][j]);
   }
  }
}

void xuat(int a[][maxC],int m, int n){
  int i,j;
  for(i=0;i<m;i++){
   for(j=0;j<n;j++){
   	 printf(" %d \t");
   	}
  }
  printf("\n");
}

int tongDCC(int a[][maxC],int m, int n){
  int i,j,s=0;
  for(i=0;i<m;i++){
   for(j=0;j<n;j++){
   	  if(i==j) s=s+a[i][j];
   	}
  }
}
