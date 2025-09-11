#include <stdio.h>
int main()                                                      
{
    int n, m,k;
    printf("enter  your raw(lines) : ");
    scanf("%d", &n);
    //             * 
    //           * * *
    //         * * * * *
    //       * * * * * * *
    //     * * * * * * * * *
    //   * * * * * * * * * * *
    // * * * * * * * * * * * * *
    int a=1;
     int b=n-1;
    for (int i = 1; i <=n; i++)
    {
        for (int k = 1; k<=b ; k++){
            printf("  ");
        }
        for(int j = 1;j<=a;j++){
           printf("* ");
         
        }
        printf("\n");
        a=a+2;
        b--;
    }
    
    return 0;
}