#include <stdio.h>
int main()
{

    int a, b, c;

    printf("enter your three num : ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("largest num is : %d", a);
        }
        else
        {
            printf("largets num is : %d", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("largest num is : %d", b);
        }
        else
        {
            printf("largest num is : %d", c);
        }
    }

    return 0;
}