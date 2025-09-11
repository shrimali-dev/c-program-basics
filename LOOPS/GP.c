#include <stdio.h>                              // quistion is display this gp 1,2,4,8,16,32....upto nth term
int main()                                     // without gp formulaass
{
    int i, n;
    printf("enter a num :  ");
    scanf("%d", &n);
    int a = 1;
    for (i = 1; i <= n; i++)
    {
        printf("%d  ", a);
       a=a*2;
    }

    return 0;
}