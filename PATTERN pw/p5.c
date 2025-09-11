#include<stdio.h>
int main(){
    int n;
    printf("enter  your raw(lines) : ");
    scanf("%d",&n);
    // 1
    // 12
    // 123
    // 1234
 

    for(int i=1;i<=n;i++){//outer loop -> no of lines
        for(int j=1;j<=i;j++){// inner loop -> no of stars in each line
            printf("%d",j);
           
        }
        printf("\n");
        
    }

return 0;
}