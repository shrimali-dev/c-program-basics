#include<stdio.h>
int main(){
    int n,f,r=0,LD=0;
    printf("enter a num : ");
    scanf("%d",&n);f=n;

    while(n>0){
     LD = n%10;    //we just replace line no 10 to line num 9 so we can avoid adding line no 13
     r= r + LD;
     r=r*10;
     n=n/10;
    }
    r=r/10;
    int sum = f+r;
printf("sum is %d",sum);





    return 0;

}