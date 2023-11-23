#include"stdio.h"
#include"conio.h"
#include"string.h"//gom cac ham xu ly chuoi
int main()
{
  char s[25],n,i;
  int kt=0;
  printf("nhap ki tu:");gets(s);
  printf("ban vua nhap %s\n",s);
  n=strlen(s);
  for(i=0;i<n;i++)printf("%c\t",s[i]);
  for(i=0;i<=n/2;i++){
  	if(s[i]!=s[n-1-i]) kt=1;
  	}
  	if(kt==0)printf("la chuoi doi xung");
  	else printf("khong la chuoi doi xung");
  getch();
  return 0;
}
