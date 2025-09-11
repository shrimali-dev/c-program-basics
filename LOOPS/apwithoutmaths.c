#include <stdio.h>                       // quistion is display this ap 4,7,10,13,16....upto nth term
int main()                                       // without ap formulaass
{
    int i, n;
    printf("enter a num :  ");
    scanf("%d", &n);
    int a = 4;
    for (i = 1; i <= n;i++)
    {
        printf("%d  ", a);
        a = a + 3;
    }

    return 0;
}