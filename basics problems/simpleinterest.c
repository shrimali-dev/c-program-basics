#include<stdio.h>
int main(){

    float p, r, t ;

    printf("enter your principal : ");
    scanf("%f" , &p);
    printf("enter your rate : ");
    scanf("%f" , &r);
    printf("enter your time : ");
    scanf("%f" , &t);

    printf("your intrest is : %f" ,(p*r*t)/100 );





    return 0;

}