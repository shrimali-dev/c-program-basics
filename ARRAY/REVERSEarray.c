#include<stdio.h>
int main(){
int n;
printf("enter array length : ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("enter your element number %d  : ",i+1);
    scanf("%d",&arr[i]);
}
for(int j=n-1;j>=0;j--){
    printf("your arr[%d] is = %d\n",j,arr[j]);
}
   return 0;
}