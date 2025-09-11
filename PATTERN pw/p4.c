#include<stdio.h>
int main(){
    int n;
    printf("enter  your raw(lines) : ");
    scanf("%d",&n);
    // * * * * 
    // * * *
    // * *
    // *
    int a=n;
    for(int i=1;i<=n;i++){//outer loop -> no of lines
        for(int j=1;j<=a;j++){// inner loop -> no of stars in each line
            printf("* ");
        }
        printf("\n");
        a--;
    }

return 0;
}