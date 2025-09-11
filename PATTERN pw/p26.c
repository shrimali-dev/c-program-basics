#include<stdio.h>
int main(){
    int i,j,nsp,nst,k,n,q;
    printf("enter your num : ");
    scanf("%d",&n);
    // * * * * * * * * * * * 
    // * * * * *   * * * * *
    // * * * *       * * * *
    // * * *           * * *
    // * *               * *
    // *                   *
nsp=1;
 nst=n;
   for(int q=1;q<=2*n+1;q++){  //pehli line
        
        printf("* ");
        
    }   
     printf("\n");

    for(i=1;i<=n;i++)
    {

        for(int j=1;j<=nst;j++)
    {  
         printf("* ");
    }    
    
    for(k=1;k<=nsp;k++)
    {
        printf("  ");
    }
    for(int j=1;j<=nst;j++)
    {  
        printf("* ");
    }
   
        printf("\n");
       
         nsp+=2;
         nst--;
    }

    return 0;
}
