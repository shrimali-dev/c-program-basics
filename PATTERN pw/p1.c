#include<stdio.h>
int main(){
    int n,m;
    printf("enter  your raw(lines) : ");
    scanf("%d",&n);
    printf("enter  your collum(star) : ");
    scanf("%d",&m);
    // * * * * * 
    // * * * * *
    // * * * * *
    // * * * * *
    for(int i=1;i<=n;i++){//outer loop -> no of lines
        for(int j=1;j<=m;j++){// inner loop -> no of stars in each line
            printf("* ");
        }
        printf("\n");
    }

 return 0;
}