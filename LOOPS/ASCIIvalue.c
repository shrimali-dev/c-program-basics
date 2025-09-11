#include <stdio.h>
int main()
{                              
    
   
  //for capital alphabet
  printf("capital alphabet : \n");
    for(int i=65;i<=90;i++)
    {
     char ch = (int)i ;
       printf("%c -> %d\n",ch,i);  
    }
    //for small alphabet
    printf("small alphabet : \n");
    for (int j = 97; j <=122 ; j++)
    {
       char h = (int)j;
       printf("%c -> %d\n",h,j);
    }
    
    return 0;}