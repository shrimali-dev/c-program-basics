#include <stdio.h>
int main()
{
    int a, b, c ,d;
    printf("enter your four num : ");
    scanf("%d %d %d %d", &a, &b, &c , &d);

    if (a > b && a > c && a>d)
    {
        printf("the largest num is = %d", a);
    }
   else if (b > a && b > c && b>d)
    {
        printf("the largest num is = %d", b);
    }
   else if (c > a && c > b && c>d)
    {
        printf("the largest num is = %d", c);
    }
   else     //(d>a && d>b && d>c)
    {
        printf("the largest num is = %d" , d);
    }

    return 0;
}