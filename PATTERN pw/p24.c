#include<stdio.h>
int main(){
    int i,j,nsp,nst,k,n,ml;
    printf("enter your num : ");
    scanf("%d",&n);
    //     * 
    //   * * *
    // * * * * *
    //   * * *
    //     *
nsp=n/2;
 nst=1;
 ml = (n/2)+1;
for(i=1;i<=n;i++){
        
        for(k=1;k<=nsp;k++){
            printf("  ");
        }
        for(j=1;j<=nst;j++){  
            
            printf("* ");
            }
     
        printf("\n");
        if(i<ml){
         nsp--;
         nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
       
    }

    return 0;
}