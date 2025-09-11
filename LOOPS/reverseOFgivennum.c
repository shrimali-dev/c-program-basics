#include<stdio.h>
int main(){
    int n,f,r=0,LD=0;
    printf("enter a num : ");
    scanf("%d",&n);
    f=n;//this is for line no 16 we have to use n value so i create a new varible taht store the value of n

    while(n>0){
     LD = n%10;    //we just replace line no 10 to line num 9 so we can avoid adding line no 13
     r= r + LD;
     r=r*10;
     n=n/10;
    }
    r=r/10;
    
printf("reverse of %d is %d",f,r);





    return 0;

}