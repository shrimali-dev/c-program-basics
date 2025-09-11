#include<stdio.h>
int main(){
    int a, b , temp  ;

    printf("enter your first num : ");
    scanf("%d" ,&a);
    printf("enter your secound num : ");
    scanf("%d" , &b );

    printf("before swapping : a = %d , b = %d\n " , a ,b);

    temp = a;
    a = b;
    b = temp ;



    printf("your new num is a = %d ,b = %d" , a , b);






    return 0;
}