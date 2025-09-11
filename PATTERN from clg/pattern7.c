#include <stdio.h>
int main()
{                                  // its takes time to understand i am still learnig it
    int i, j, n = 4, k;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
//    *
//   ***
//  *****
// *******