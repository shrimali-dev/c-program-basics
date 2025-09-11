#include <stdio.h>
int main(){
    int i,j,nsp,nst,k,n,q;
    printf("enter your num : ");
    scanf("%d",&n);
    // enter your num : 3
    // 1 2 3 4 3 2 1  
    // 1 2 3   3 2 1
    // 1 2       2 1
    // 1           1


nsp=1;
 nst=n;
 int m=n-1;
 for(q=1;q<=n;q++) {
    printf("%d ",q);
 } 
 printf("%d ",n+1);
 for(q=n;q>0;q--){
    printf("%d ",q);
 }
     printf("\n");

    for(i=1;i<=n;i++)
    {int a=1;

        for(int j=1;j<=nst;j++)
    {  
         printf("%d ",a);
         a++;
    }    
    
    for(k=1;k<=nsp;k++)
    {
        printf("  ");
        a++;
    }
    
    for(int j=nst;j>0;j--)
    {  
        printf("%d ",j);
      
    }
   
        printf("\n");
       
         nsp+=2;
         nst--;
    }

    return 0;
}