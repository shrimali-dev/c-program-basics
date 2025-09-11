#include <stdio.h>
int main()                                                      
{
    int n, m,k;
    printf("enter  your raw(lines) : ");
    scanf("%d", &n);

    //         A 
    //       A B C
    //     A B C D E
    //   A B C D E F G
    // A B C D E F G H I
    int b=n-1;
    int a=1;
    for (int i = 1; i <=n; i++)
    {  int c=65;
        for (int k = 1; k<=b; k++){
            printf("  ");
        }
        for(int j = 1;j<=a;j++){
          char ch = (int)c;
          printf("%c ",c);
         c++;
        }
        printf("\n");
   b--;
   a=a+2;
   
    }
    
    return 0;
 }




    // with small difrance

    //      output
    
    
    //          A 
    //       B C D
    //     E F G H I
    //   J K L M N O P
    // Q R S T U V W X Y

// #include <stdio.h>
// int main()                                                      
// {
//     int n, m,k;
//     printf("enter  your raw(lines) : ");
//     scanf("%d", &n);
// int b=n-1;
// int a=1;
// int c=65;         <-------------------------------
//     for (int i = 1; i <=n; i++)
//     {  
//         for (int k = 1; k<=b; k++){
//             printf("  ");
//         }
//         for(int j = 1;j<=a;j++){
//           char ch = (int)c;
//           printf("%c ",c);
//          c++;
//         }
//         printf("\n");
//    b--;
//    a=a+2;
   
//     }
    
//     return 0;
//   }



//       2nd diffrence 

//    output 



//         A 
//       B B B
//     C C C C C
//   D D D D D D D
// E E E E E E E E E

// #include <stdio.h>
// int main()                                                      
// {
//     int n, m,k;
//     printf("enter  your raw(lines) : ");
//     scanf("%d", &n);
// int b=n-1;
// int a=1;
// int c=65;        <-------------------
//     for (int i = 1; i <=n; i++)
//     {  
//         for (int k = 1; k<=b; k++){
//             printf("  ");
//         }
//         for(int j = 1;j<=a;j++){
//           char ch = (int)c;
//           printf("%c ",c);
         
//         }
//         printf("\n");
//    b--;
//    a=a+2;
//    c++;                  <-----------------------
   
//     }
    
//     return 0;
//    }


