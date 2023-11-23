#include "conio.h"
#include "stdio.h"
#define MAX 100
void nhap(int a[][MAX], int n);
void xuat(int a[][MAX], int n);
int main()
{
	int a[MAX][MAX],i,j;
	int n;
	printf("\nnhap phan tu cua mang ");
	scanf("%d",&n);
	nhap(a,n);
	xuat(a,n);
	printf("\ntong duong cheo phu la : %d ",tongDCP(a,n));
	getch();
	return 0;
	
}
void nhap(int a[][MAX], int n){
	int i,j;
	for(i=0; i<n;i++)
		for(j=0; j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
}
void xuat(int a[][MAX], int n){
	int i,j;
	printf(" \n cac phan tu cua mang la: \n");
	for(i=0; i<n; i++)
		{
		for(j=0; j<n; j++)
			printf("\t%d",a[i][j]);
			printf("\n");
		}
}
int tongDCP(int a[][MAX],int n){
	int tong=0;
	int i,j;
	for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if(i+j==n-1){
			tong=tong+a[i][j];
			}
		}
	}
	return tong;
}
