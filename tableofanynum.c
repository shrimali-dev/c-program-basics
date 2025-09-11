#include<stdio.h>
int main(){
int i , n;
   printf("enter your num : ");
   scanf("%d" , &n);
    for(i=1; i<=n*10;i=i+1){            //another trick is 
      if(i%n==0){                      //for(i=1;i<=n*10;i=i+n){
    printf("%d\n", i);                //printf("%d\n" , i)}
      }                             
  }
  return 0;
}                                
                                 