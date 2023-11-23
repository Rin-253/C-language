#include "conio.h"
#include "stdio.h"
#include "math.h"
#define MAX 100
void nhap(int a[][MAX],int m, int n);
void xuat(int a[][MAX],int m, int n);
int tong(int a[][MAX],int m,int n);
int phantulonnhat(int a[][MAX],int m,int n);
void show(int a[][MAX],int m,int n);
int main()
{
	int a[MAX][MAX],i,j,n,max;
	printf("\nnhap phan tu cua mang ");
	scanf("%d",&n);
	nhap(a,2,3);
	xuat(a,2,3);
    printf("\ntong cac phan tu cua mang la : %d");
    tong(a,2,3);
    printf("\nphan tu lon nhat la: %d");
    phantulonnhat(a,2,3);
    printf("\ncac phan tu la so nguyen to la : %d");
    show(a,2,3);
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
int tong(int a[][MAX],int m,int n){
    int i,j,s=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            s=s+a[i][j];
        }
    }
	return s; 
}   
int phantulonnhat(int a[][MAX],int m,int n){
   int i,j,max;
   max=a[0][0];
   for(i=0;i<m;i++){
	for(j=0;j<n;j++)
		{
			if(a[i][j]>max)max=a[i][j];
			}
	}
    return max;			
}
int nto(int n){
    int i;
    for(i=2;i<=n-1;i++){
	   if(n%i==0)return 0;
	   else return 1;
	}
	//ham tra ve gia tri 1 la so nguyen to,0 khong la so nguyen to
 }
 void show(int a[][MAX],int m,int n){
    int i,j;
    for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
	     if(nto(a[i][j])==1)printf("\t%d",a[i][j]);
	  }
	}
 }
