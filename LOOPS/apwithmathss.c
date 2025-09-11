#include <stdio.h>                     // quistion is display this ap 1,3,5,7,9,11,13....upto nth term
int main()
{                                                   // formulaa for ap in loop
    int i, n;                                       // for( i=a ; i<=a+(n-1)*d ; i=i+d )
    printf("enter a num :  ");                      
    scanf("%d", &n);
    for (i = 1; i <= (2 * n) - 1; i = i + 2)
    {

        printf("%d  ", i);
    }

    return 0;
}