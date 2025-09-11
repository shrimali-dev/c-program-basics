#include<stdio.h>
int main(){
    int n;
    printf("enter  your raw(lines) : ");
    scanf("%d",&n);
    //    output 
    
    
    // 1234
    // 123
    // 12
    // 1
    
    int a=n;
   
    for(int i=1;i<=n;i++){//outer loop -> no of lines
        for(int j=1;j<=a;j++){// inner loop -> no of stars in each line
            printf("%d",j);
        }
        printf("\n");
        
        a--;
    }

return 0;
}


// 

// #include<stdio.h>
// int main(){
//     int n,m;
//     printf("enter  your raw(lines) : ");
//     scanf("%d",&n);


//        output

// 55555
// 4444
// 333
// 22
// 1
//   
//    
//     int a=n;
//     int b=n;   (try b=1 and b++ for increasing order)
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=a;j++){
//             printf("%d",b);
//         }
//         printf("\n");
//         b--;
//         a--;
//     }

// return 0;
// }

