#include <stdio.h>                     // quistion is display this ap 4,7,10,13,16....upto nth term
int main()
{                                                   // formulaa for ap in loop
    int i, n;                                       // for( i=a ; i<=a+(n-1)*d ; i=i+d )
    printf("enter a num :  ");
    scanf("%d", &n);
    for (i = 4; i <= 4 + (n - 1) * 3; i = i + 3)
    {

        printf("%d  ", i);
    }

    return 0;
}