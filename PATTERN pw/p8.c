#include<stdio.h>
int main(){
    int n;
    printf("enter  your raw(lines) : ");
    scanf("%d",&n);
    
    // A 
    // A B
    // A B C
    // A B C D
char ch;

for(int i=1;i<=n;i++){
    int a=65;
        for(int j=1;j<=i;j++){
        char ch=(int)a; 
            printf("%c ",a);
            a++;
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
    
// // A 
// // B B
// // C C C
// // D D D D
// char ch;

// int a=65;                    <---------
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//         char ch=(int)a; 
//             printf("%c ",a);
//         }
//         a++;                   <-----------
//         printf("\n");
       
//     }

// return 0;
// }


// #include<stdio.h>
// int main(){
//     int n,m;
//     printf("enter  your raw(lines) : ");
//     scanf("%d",&n);
    
// A 
// B C
// D E F
// G H I J
// char ch;

// int a=65;                     <----------
// for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//         char ch=(int)a; 
//             printf("%c ",a);
//             a++;                <---------
//         }
//         printf("\n");
       
//     }

// return 0;
// }