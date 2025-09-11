#include <stdio.h>
int main()
{
    int n, m;
    printf("enter  your raw(lines) : ");
    scanf("%d", &n);
    // 1 
    // 2 3
    // 4 5 6
    // 7 8 9 10
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }

    return 0;
}