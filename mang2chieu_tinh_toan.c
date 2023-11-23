#include "stdio.h"
#include "conio.h"
#include "math.h" // su dung cac ham toan hoc
#define maxD 100
#define maxC 50
void nhap(int a[][maxC], int m, int n);
void xuat(int a[][maxC], int m, int n);
int tong (int a[][maxC], int m, int n);
int GTLN (int a[][maxC], int m, int n);
int ktnt(int n); // tra ve -1 khong la so nguyen to, 1 nêu la so nguyen to
int DemSNT(int a[][maxC], int m, int n);
int ktCP(int n);
int DemSCP(int a[][maxC], int m, int n);
int main(){
	int a[maxD][maxC], m,n;
	printf("nhap so dong,so cot "); scanf("%d%d", &m, &n);
	nhap(a,m,n);
	xuat(a,m,n);
	printf(" \n ******** \n tong cac phan tu cua mang la %d ", tong(a,m,n));
	printf("\n phan tu lon nhat la %d",GTLN(a,m,n));
	printf("\n so cac nguyen to trong mang la %d",DemSNT(a,m,n));
	printf("\n so cac phan tu trong ma la so cp la:  %d",DemSCP(a,m,n));
	getch();
	return 0;
	
}
void nhap(int a[][maxC], int m, int n)
{
	int i,j;
	for(i=0; i<m; i++)
		for(j=0; j<n;j++){
			printf("a[%d][%d]=",i,j); 
			scanf("%d", &a[i][j]);
		}
}
void xuat(int a[][maxC], int m, int n){
	int i,j;
	printf("\n danh sach cac phan tu cua mang la : \n\t\t ******** \n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}	
}
int tong (int a[][maxC], int m, int n){
	int S=0,i,j;
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			S=S+a[i][j];
	return S;
}
int GTLN (int a[][maxC], int m, int n)
{
	int i,j,max=a[0][0];
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			if(max<a[i][j])max=a[i][j];
	return max;
	
}
int ktnt(int n){
	int i;
	if(n<=1) return -1;
		else {
			for(i=2; i<n; i++)
				if(n%i==0) return -1;
			return 1;
		}
}
int DemSNT(int a[][maxC], int m, int n){
	int d=0, i,j;
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			if(ktnt(a[i][j])==1) d++;
	return d;
}
int ktCP(int n)
{	
	if(n<0)return -1;
		else{
			int i=(int)sqrt(n);
			if(n==i*i)return 1;
				else return -1;
		}
}
int DemSCP(int a[][maxC], int m, int n){
	int i,j,dem=0;
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			if(ktCP(a[i][j])==1) dem++;
			return dem;
}
