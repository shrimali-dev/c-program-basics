#include <stdio.h>
int main()
{                              
    int a=1,b=1,sum=1,n;
    printf("enter a num : ");
    scanf("%d", &n);
    
   sum=1;
    for(int i=1;i<=n-2;i++)
    {
       sum = a+b;
       a=b;
       b=sum;
          
         
    }
printf("the %dth fibonnaci is %d\n",n,sum);

    return 0;}