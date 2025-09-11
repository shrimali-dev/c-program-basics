#include<stdio.h>
int main(){

    int x;
    printf("enter your number : ");
    scanf("%d" , &x);
    if (x>99 && x<1000)
    {
        printf("it is a three digit number");

    }
    else{
        printf("it is not A THREE DIGIT NUMBER");
        
    }

return 0 ;

}