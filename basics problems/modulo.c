#include<stdio.h>
int main (){

    int a ;
    int b ;
    printf("enter dividend : ");
    scanf("%d" , &a);
    printf("enter diviser : ");
    scanf("%d" , &b);
    int r = a % b ;
   
    printf("your reminder when %d is divided by %d is : %d" ,a , b , r );
    






    return 0;

}