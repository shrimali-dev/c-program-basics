#include<stdio.h>
int main(){
    int i,j,nsp,k,n,g,l;
    printf("enter your num : ");
    scanf("%d",&n);
    //         A 
    //       A B A
    //     A B C B A
    //   A B C D C B A
    // A B C D E D C B A
nsp=n-1;

for(i=1;i<=n;i++){
        l=i-1;
       
       
        for(k=1;k<=nsp;k++){
            printf("  ");
        }
        for(j=1;j<=i;j++){  
             char ch = (int)(j+64); 
            printf("%c ",ch);
            
        }
        for(g=1;g<i;g++){ 
            char ch = (int)(l+64); 
            printf("%c ",ch);
            l--;
        }
        printf("\n");
       
        nsp--;

       
    }

    return 0;
}