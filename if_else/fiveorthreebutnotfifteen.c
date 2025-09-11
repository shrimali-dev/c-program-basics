#include <stdio.h>
int main()
{
    // this is the code for some number which is divisible by 3 or 5 but not by 15
    int a;
    printf("enter your positive num : ");
    scanf("%d", &a);
    // if (a%5==0 || a%3==0)
    // {
    //     if (a%15!=0)
    //     {
    //         printf("it is divisible by five or three but not by fifteen");
    //     }
    //     else{printf("it is  divisible by 15");}

    // }
    if ((a % 3 == 0 || a % 5 == 0) && a % 15 != 0)
    {
        printf("it is divisible by five or three but not by fifteen");
    }
    else
    {
        printf("the number is not matching the recuired condition");
    }

    return 0;
}