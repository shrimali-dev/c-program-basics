#include <stdio.h>
int main()
{                              
    int a=1,b=1,sum=1,n;
    printf("enter a num : ");
    scanf("%d", &n);
    int f=1;
   sum=1;
    for(int i=1;i<=n;i++)
    {if(i>=3){
       sum = a+b;
       a=b;
       b=sum;}
          printf("the %dth fibonnaci is %d\n",f,sum);
          f++;
    }


    return 0;}