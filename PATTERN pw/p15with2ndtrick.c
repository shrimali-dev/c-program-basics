#include <stdio.h>
int main()
{
    int n, m;
    printf("enter  your raw(lines) : ");
    scanf("%d", &n);
 // lines 1 2 3 4
    // 1  1  
    // 2  0 1
    // 3  1 0 1
    // 4  0 1 0 1

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)    //   <-----------------
                printf("1 ");
             else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}