#include "conio.h"
#include "stdio.h"
#define MAX 100
void nhap(int a[], int n);
void xuat(int a[], int n);
void showeven(int a[], int n);
 // hien thi cac phan tu la so chan
// xay dung ham hien thi cac phan tu cua mang co gia tri lon hon 3
int demNT(int a[], int n); // dem so phan tu la so nguyen to
void show(int a[], int n, int k){
	int i;
	for(i=0;i<n;i++)
		if(a[i]>k)printf("\t%d",a[i]);
}
int ktnt(int n); // kiem tra xem so n co la so nguyen to khong?
void showNT(int a[], int n); // hien thi cac phan tu la so nguyen to cua mang
int vtMax(int a[], int n);
int main()
{
	int a[MAX],n,i,max;
	printf(" nhap so phan tu cua mang: "); scanf("%d",&n);
	nhap(a,n);
	printf("\n danh sach cac phan tu cua mang \n");
	xuat(a,n);
	printf("\n cac phan tu co gia tri chan la ");
	showeven(a, n);
	printf("\ndanh sach cac phan tu lon hon 3 la");
	show(a,n,3);
	printf(" \n cac phan tu la so nguyen to la : ");
	showNT(a,n);
	printf(" \n so phan tu la so nguyen to la  %d",demNT(a,n));
	max=vtMax(a,n);
	printf("\n phan tu lon nhat la: %d tai vi tri: %d", a[max], max);
	getch();
	return 0;
	
}
void nhap(int a[], int n){
	int i;
	for(i=0; i<n;i++){
		printf("nhap phan tu thu %d",i); scanf("%d",&a[i]);
	}
}
void xuat(int a[], int n){
	int i;
	for(i=0;i<n;i++) printf("\t %d",a[i]);

}
void showeven(int a[], int n){
	int i;
	for(i=0; i<n; i++)
	{
		if (a[i]%2==0) printf("\t %d",a[i]);
	}
}
int ktnt(int n)
{
	int i;
	for(i=2; i<=n-1; i++) 
		if (n%i==0)return 0;
	return 1;
	// ham tra ve gia tri 1 neu la so nguyen to, 0 khong la so nguyen to
}
void showNT(int a[], int n){
	int i;
	for(i=0; i<n; i++)
		if(ktnt(a[i])==1) printf("\t %d",a[i]);
}
// dem so cac phan tu cua mang la so nguyen to
int demNT(int a[], int n){
	int d=0,i;
	for (i=0; i<n; i++)
		if(ktnt(a[i])==1)d++;
	return d;
}
int vtMax(int a[], int n)
{
	int vtmax=0,i;
	for(i=1; i<n; i++)
		if(a[i]>a[vtmax]) vtmax=i;
	return vtmax;
}
