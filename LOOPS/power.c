#include <stdio.h>
int main()
{                              
    int a,b;
    printf("enter a num : ");
    scanf("%d", &a);
    printf("enter secound num : ");
    scanf("%d", &b);
    int power=1;
  
    for(int i=1;i<=b;i++)
    {
       power = power*a;
          
         
    }
printf("the power is %d",power);

    return 0;}