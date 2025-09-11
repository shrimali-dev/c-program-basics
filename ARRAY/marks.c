#include<stdio.h>
int main(){
int arr[10];
for(int i=0;i<10;i++){
    printf("index %d  roll number %d enter him/his marks : ",i,i+1);
    scanf("%d",&arr[i]);
}
printf("\n");
for(int j=0;j<10;j++){
    if(arr[j]<35){
        printf("index %d whos roll no is %d is faill  \n",j,j+1);
    }
}  
   return 0;
}