#include "conio.h"
#include "stdio.h"
#include "math.h"
#define MAX 100
void nhap(int a[][MAX],int m, int n);
void xuat(int a[][MAX],int m, int n);
int tongcacphantulascp(int a[][MAX],int m,int n);
int main()
{
	int a[MAX][MAX],i,j;
	int n;
	printf("\nnhap phan tu cua mang ");
	scanf("%d",&n);
	nhap(a,3,5);
	xuat(a,3,5);
	printf("\ntong cac phan tu tren duong cheo phu la : %d ",tongtrenDCP(a,3,5));
	printf("\ntong cac phan tu duoi duong cheo phu la : %d ",tongduoiDCP(a,3,5));
	printf("\ntong cac phan tu la so chinh phuong la :%d ",tongcacphantulascp(a,3,5));
	getch();
	return 0;
	
}
void nhap(int a[][MAX],int m, int n){
	int i,j;
	for(i=0; i<m;i++)
		for(j=0; j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
}
void xuat(int a[][MAX],int m, int n){
	int i,j;
	printf(" \n cac phan tu cua mang la: \n");
	for(i=0; i<m; i++)
		{
		for(j=0; j<n; j++)
			printf("\t%d",a[i][j]);
			printf("\n");
		}
}

int tongtrenDCP(int a[][MAX],int m, int n){
	int tong=0;
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i+j==n-1){
				tong=tong+a[i][j];
			}
		}
	}
	return tong;
}

int tongduoiDCP(int a[][MAX],int m, int n){
	int tong=0;
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i+j==n+1){
				tong=tong+a[i][j];
			}
		}
	}
	return tong;
}
int tongcacphantulascp(int a[][MAX],int m,int n){
  	int i,j;
	for(i=0; i<m; i++){
	for(j=0; j<n; j++){
     int b,can,tong=0;
     i=(int)sqrt(n);
     if(n==b*b)return 1;// 1 la so chinh phuong
     tong=tong+a[i][j];
     }
    }
}
