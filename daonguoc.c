#include"stdio.h"
#include"conio.h"
#include"string.h"
int main()
{
  char s[20];
  int n,i;
  printf("nhap ki tu:");gets(s);
  printf("ban vua nhap %s\n",s);
  n=strrev(s);
  for(i=0;i<n;i++)printf("%c\t",s[i]);
  getch();
  return 0;
}
