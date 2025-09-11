#include <stdio.h>
int main()                                                      
{
    int n, m,k;
    printf("enter  your raw(lines) : ");
    scanf("%d", &n);
    //         * * * * * 
    //       * * * * *
    //     * * * * *
    //   * * * * *
    // * * * * *
   int a=n-1;
    for (int i = 1; i <=n; i++)
    {
        
        for (int k = 1; k<=a ; k++){
            printf("  ");
        }
        for(int j = 1;j<=n;j++){
            printf("* ");
        }
        printf("\n");
        a--;
    }

    return 0;
}