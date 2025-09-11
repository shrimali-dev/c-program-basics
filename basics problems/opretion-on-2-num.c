#include<stdio.h>
#include<math.h>
// dev no pelo program :)
int main(){
    printf("maja aa raha hai bhai \n bwal chijj\n");
    int x , y;
    printf("enter the first num:");
    scanf("%d" , &x);
    printf("enter the secound num:");
    scanf("%d" , &y);
    
    printf("sum = %d\n" , x+y);
    printf("sub = %d\n" , x-y);
    printf("multi = %d\n" , x*y);
    printf("div = %.2f\n" ,(float) x/y);
    printf("power = %.0f\n" ,pow (x,y));
    printf("\n thank you:)\n");
    return 0;
    }