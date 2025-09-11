#include <stdio.h>                     // quistion is display this ap 100,50,25....upto nth terms
int main()
{                                                   
    int  n;                                       
     printf("enter a num :  ");
     scanf("%d", &n);
    float a = 100.00;
    for (int i = 1; i<=n ;  i++)
    {
        printf("%f  ", a);
        a = a*(1/2.00 );
    }

    return 0;
}