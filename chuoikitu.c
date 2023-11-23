#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i, n;
    printf("nhap chuoi ki tu : ");
    gets(s);
    printf("ban vua nhap : %s\n",s);
    n= strlen(s);
    for(i=n; i>=0; i--)
    {
        printf("%c\t", s[i]);
            }
    getch();
    return 0;
}
