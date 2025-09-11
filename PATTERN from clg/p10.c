#include<stdio.h>
int main(){
    int i,j,nsp,nst,k,n;
    printf("enter your num : ");
    scanf("%d",&n);
//  3 2 1 
//    2 1 
//      1 
nsp=0;
 nst=n;
 for(i=1;i<=n;i++){
    int z=n-nsp;
         for(k=1;k<=nsp;k++){
        printf("  ");
    }
    for(j=1;j<=nst;j++){  
        
        printf("%d ",z);
       z--;
        
    }
    
        printf("\n");
       
         nsp++;
         nst--;
     
       
       
    }

    return 0;
}