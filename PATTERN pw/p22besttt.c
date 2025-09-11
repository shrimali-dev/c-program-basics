#include<stdio.h>
int main(){
    int i,j,nsp,k,n,g,l;
    printf("enter your num : ");
    scanf("%d",&n);
    //         1 
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
    // 1 2 3 4 5 4 3 2 1
    nsp=n-1;
  

for(i=1;i<=n;i++){
        l=i-1;
       
        for(k=1;k<=nsp;k++){  //spaces ke liyee
            printf("  ");
        }
        for(j=1;j<=i;j++){  // number triangle
            printf("%d ",j);
            
        }
        for(g=1;g<i;g++){    // extraa cheezz
            printf("%d ",l);
            l--;
        }
        printf("\n");
        nsp--;

       
    }

    return 0;
}