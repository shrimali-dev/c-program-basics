#include<stdio.h>
int main(){
    int n ;
    printf("enter a number :");
    scanf("%d" , &n);

    if (n%2==0)
    {
        printf("even number");
           
    }
     /* if (n%2!=0)
    {                            jo eklu if vaparvu hoy to aa karvu else ni jagya e :)
     printf("odd number");       ane jo else vaprvu hoy to niche pramane karvu :)
    }*/
     else{
        printf("odd number");
     } 
    return 0;
}