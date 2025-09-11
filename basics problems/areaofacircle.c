#include <stdio.h>

int main()
{
    float r, pi = 3.1415;

    printf("enter your radius:");
    scanf("%f", &r);
    printf("your area is =  %f", pi * r * r);

    return 0;
}