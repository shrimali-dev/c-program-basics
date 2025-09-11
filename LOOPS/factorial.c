#include <stdio.h>
int main()
{                              
    int fact=1,n;
    printf("enter a num : ");
    scanf("%d", &n);
   int f=1;
    for(int i=1;i<=n;i++)
    {
       fact=fact*i;
        printf("%d!=%d\n",f,fact);  
        f++;
    }
   

    return 0;}