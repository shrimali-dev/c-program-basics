#include <stdio.h>                     // quistion is display this ap 100,97,94,91....upto all terms which are positive
int main()
{                                                   
    // int  n;                                       
    // printf("enter a num :  ");
    // scanf("%d", &n);
    int a = 100;
    for (int i = 1; a>0 ;  i++)
    {
        printf("%d  ", a);
        a = a - 3;
    }

    return 0;
}