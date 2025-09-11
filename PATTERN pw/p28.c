#include <stdio.h>
int main(){
    int i,j,nsp,nst,k,n,q;
    printf("enter your num : ");
    scanf("%d",&n);
    // A B C D E F G
    // A B C   E F G
    // A B       F G
    // A           G

nsp=1;
 nst=n;
 int a=65; 
   for(int q=1;q<=2*n+1;q++){  //pehli line
       char ch = (int)a;
        printf("%c ",ch);
        a++;
        
    }   
     printf("\n");

    for(i=1;i<=n;i++)
    {int a=65;

        for(int j=1;j<=nst;j++)
    { 
         char ch=(int)a;
         printf("%c ",ch);
         a++;
    }    
    
    for(k=1;k<=nsp;k++)
    {
        printf("  ");
        a++;
    }
    for(int j=1;j<=nst;j++)
    {
         char ch=(int)a;
         printf("%c ",ch);
         a++;
    }
   
        printf("\n");
       
         nsp+=2;
         nst--;
    }

    return 0;
}