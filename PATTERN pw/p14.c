#include <stdio.h>
int main()
{
    int n, m;
    printf("enter  your raw(lines) : ");
    scanf("%d", &n);
    // 1 
    // 3 5
    // 7 9 11
    // 13 15 17 19
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            
            printf("%d ", a);
            a=a+2;
        }
        printf("\n");
    }

    return 0;
}