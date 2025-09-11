#include <stdio.h>
int main()
{
    int n,i;
    printf("enter a num : ");
    scanf("%d", &n);
    int a=0;
    for(i=2;i<n;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
   if(n<=1){
    printf("%d is not valid for checking prime or composite ",n);
   }
   else if (a==1){
    printf("%d is a  composite num",n);
   }
   else{
    printf("%d is a prime num",n);
   }
    return 0;
}