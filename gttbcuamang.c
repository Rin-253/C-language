#include<stdio.h>
#include<conio.h>
#include<math.h>
#define maxD 100
#define maxC 200
void nhap(int a[][maxC],int m, int n);
void xuat(int a[][maxC],int m, int n);
float gttb(int a[][maxC],int m, int n);
int main()
{
  int a[maxD][maxC],m,n;
  printf("nhap so dong, so cot:");scanf("%d %d",&m,&n);
  printf("\nnhap cac phan tu cua mang:");
  nhap(a,m,n);
  printf("\ndanh sach cac phan tu la:");
  xuat(a,m,n);
  printf("\ngia tri trung binh cua mang la:");
  gttb(a,m,n);	
  getch();
  return 0;
}

void nhap(int a[][maxC],int m, int n){
   int i,j;
   for(i=0;i<m;i++){
      for(j=0;j<n;j++){
	     printf("a[%d][%d]=");
	     scanf("%d",a[i][j]);
	  }
   }
}

void xuat(int a[][maxC],int m, int n){
    int i,j;
   for(i=0;i<m;i++){
      for(j=0;j<n;j++){
	     printf("\n %d \t",a[i][j]);
	     }
   }
   printf("\n");
}

float gttb(int a[][maxC],int m, int n){
	if(m<=0||n<=0)return 0;
	
    int i,j,s=0;
     for(i=0;i<m;i++){
      for(j=0;j<n;j++){
	     s+=a[i][j];
	  }
	}
	float gttb=0;
	gttb+=(float)s/(m*n);
	return gttb;
}
