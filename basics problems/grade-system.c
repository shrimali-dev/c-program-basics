#include<stdio.h>
#include<math.h>

int main(){
    int marks;
    printf("enter your marks(0-100): ");
    scanf("%d" , &marks);
    if (marks >=90)
    printf("Grade A\n");
    else if (marks >=80)
    printf("Grade B\n");
    else if (marks >=70)
    printf("Grade C\n");
    else if (marks >=60)
    printf ("Grade D\n");
    else printf("fail thyu tu  ochva bess sonu monu\n");

 return 0;
}