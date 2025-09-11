#include<stdio.h>
int main(){
    int n;
    printf("enter  your raw(lines) : ");
    scanf("%d",&n);
    // 1 
    // A B
    // 1 2 3
    // A B C D
   
   
char ch;

    for(int i=1;i<=n;i++){
      int a=65;
        for(int j=1;j<=i;j++){
        if(i%2==0){
            char ch=(int)a; 
            printf("%c ",a);
         a++;
        }
        else{printf("%d ",j);
        }
        }
        printf("\n");
       
    }

return 0;
}