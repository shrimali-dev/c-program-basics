#include<stdio.h>
int main(){

    int a;
    printf("enter your positive num : ");
    scanf("%d" , &a);
    if (a%5==0 && a%3==0)
    {
       printf("it is divisble by five and three ");
    }
    else
    {
        printf("it is not divisble by five  and three");

    }






    return 0;

}