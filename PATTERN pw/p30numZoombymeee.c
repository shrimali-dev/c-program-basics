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
int f=2*n-1;
    for(int i=1;i<=f;i++){
     
        for(int j=1;j<=f;j++){
       
       if((i==1||j==1) ||(i==f||j==f)){
        printf("%d ",a=4);
        }
        
       else if((i==2||j==2) ||(i==f-1||j==f-1)){
        printf("%d ",a=3);
        }

         else if((i==3||j==3) ||(i==f-2||j==f-2)){
         printf("%d ",a=2);
        }
         else if((i==4||j==4) ||(i==f-3||j==f-3)){
         printf("%d ",a=1);
        }

         else {printf("  ");
        }


        }
        printf("\n");
    
    }
       
        
       
       
       
 return 0;
    
}
