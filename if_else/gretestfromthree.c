#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter your three num : ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is the largest num !", a);
    }
    if (b > a && b > c)
    {
        printf("%d is largest num", b);
    }
    if (c > a && c > b)
    {
        printf("%d is largest num", c);
    }

    return 0;
}