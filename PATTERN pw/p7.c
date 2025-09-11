#include<stdio.h>
int main(){
    int n;
    printf("enter  your raw(lines) : ");
    scanf("%d",&n);
    // 1 
    // 1 3
    // 1 3 5
    // 1 3 5 7
    // 1 3 5 7 9
    
int a;
for(int i=1;i<=n;i++){//outer loop -> no of lines
    a=1;
        for(int j=1;j<=i;j++){// inner loop -> no of stars in each line
        
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
       
    }

return 0;
}
// #include<stdio.h>
// int main(){
//     int n,m;
//     printf("enter  your raw(lines) : ");
//     scanf("%d",&n);
// // 1 
// // 3 3
// // 5 5 5
// // 7 7 7 7
// // 9 9 9 9 9
    
// int a;
// a=1;
//     for(int i=1;i<=n;i++){//outer loop -> no of lines
//         for(int j=1;j<=i;j++){// inner loop -> no of stars in each line
        
//             printf("%d ",a);
//         }
//         a=a+2;
//         printf("\n");
       
//     }

// return 0;
// }