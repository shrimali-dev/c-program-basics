#include <stdio.h>
int main()                                                      
{
    int n, m,k;
    printf("enter  your raw(lines) : ");
    scanf("%d", &n);
    //         1 
    //       1 2 3
    //     1 2 3 4 5
    //   1 2 3 4 5 6 7
    // 1 2 3 4 5 6 7 8 9
    int a=1; int b=n-1;
    for (int i = 1; i <=n; i++)
    {  
        for (int k = 1; k<=b ; k++){
            printf("  ");
        }
        for(int j = 1;j<=a;j++){
           printf("%d ",j);
         
        }
        printf("\n");
      a=a+2;b--;
    }
    
    return 0;
}

// if you put  printf("%d ",a); then the output will be

//         1 
//       3 3 3
//     5 5 5 5 5
//   7 7 7 7 7 7 7
// 9 9 9 9 9 9 9 9 9
