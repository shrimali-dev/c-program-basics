#include<stdio.h>
int main(){
    int n,m,a=1;
    printf("enter  your raw(lines) : ");
    scanf("%d",&n);
// enter  your raw(lines) : 4
// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4
int min =0;
int f=2*n-1;
    for(int i=1;i<=f;i++){
     
        for(int j=1;j<=f;j++){
        int a= i;
        if(a>n) a= 2*n-i;
        int b = j;
        if(b>n) b = 2*n-j;
        if(a<b)min=a;
        else min = b;
      
        printf("%d ",n+1-min); 
    
         
        }
        printf("\n");
        }
       
        
        return 0;
    }
// 1 1 1 1 1 1 1 1 1 
// 1 2 2 2 2 2 2 2 1
// 1 2 3 3 3 3 3 2 1
// 1 2 3 4 4 4 3 2 1
// 1 2 3 4 5 4 3 2 1
// 1 2 3 4 4 4 3 2 1
// 1 2 3 3 3 3 3 2 1
// 1 2 2 2 2 2 2 2 1
// 1 1 1 1 1 1 1 1 1
// #include<stdio.h>
// int main(){
//     int n,m,a=1;
//     printf("enter  your raw(lines) : ");
//     scanf("%d",&n);
// // enter  your raw(lines) : 4

// int min =0;
// int f=2*n-1;
//     for(int i=1;i<=f;i++){
     
//         for(int j=1;j<=f;j++){
//         int a= i;
//         if(a>n) a= 2*n-i;
//         int b = j;
//         if(b>n) b = 2*n-j;
//         if(a<b)min=a;
//         else min = b;
      
//         printf("%d ",min); <-------------------------
    
         
//         }
//         printf("\n");
//         }
       
        
//         return 0;
//     }