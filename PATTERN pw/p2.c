#include<stdio.h>
int main(){
    int n;
    printf("enter  your raw(lines) : ");
    scanf("%d",&n);
    // 1 2 3 4 
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
   
    for(int i=1;i<=n;i++){//outer loop -> no of lines
        for(int j=1;j<=n;j++){// inner loop -> no of stars in each line
            printf("%d ",j);
        }
        printf("\n");
    }







    return 0;
}