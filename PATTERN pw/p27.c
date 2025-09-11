#include <stdio.h>
int main(){
    int i,j,nsp,nst,k,n,q;
    printf("enter your num : ");
    scanf("%d",&n);
    // enter your num : 3
    // 1 2 3 4 5 6 7 
    // 1 2 3   5 6 7
    // 1 2       6 7
    // 1           7

nsp=1;
 nst=n;
   for(int q=1;q<=2*n+1;q++){  //pehli line
        
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
    for(int j=1;j<=nst;j++)
    {  
        printf("%d ",a);
        a++;
    }
   
        printf("\n");
       
         nsp+=2;
         nst--;
    }

    return 0;
}