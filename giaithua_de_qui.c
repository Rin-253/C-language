#include <stdio.h>
#include <conio.h>
int giaiThua(int n)
{
    if (n == 1)
        return 1;
    return n * giaiThua(n - 1);
}
int main()
{
    int n;
    printf("nhap so n=");
    scanf("%d", &n);
    printf("Giai thua %d la: %d", n, giaiThua(n));
    return 0;
}
