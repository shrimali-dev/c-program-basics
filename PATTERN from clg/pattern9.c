#include <stdio.h>
int main(){
    int i,j,k;
    for (i=3;i>0;i--){
        for(k=1;k<i;k++){
            printf(" ");
        }
        for(j=3;j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
  return 0;
}
//   3
//  32
// 321