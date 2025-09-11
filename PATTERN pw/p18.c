#include <stdio.h>
int main()                                                      
{
    int n, m,k;
    printf("enter  your raw(lines) : ");
    scanf("%d", &n);
    //         A 
    //       B C
    //     D E F
    //   G H I J
    // K L M N O
    int a=n-1;
    int b = 65;
    for (int i = 1; i <=n; i++)
    {
        for (int k = 1; k<=a ; k++){
            printf("  ");
        }
        for(int j = 1;j<=i;j++){
            char ch =(int)b;
            
            printf("%c ",ch);
            b++;
        }
        printf("\n");
        a--;
    }
    
    return 0;
}