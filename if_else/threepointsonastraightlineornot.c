#include <stdio.h>
#include<math.h>
int main()
{

    double x1, y1, x2, y2, x3, y3;
    printf("enter x1 : ");
    scanf("%lf", &x1);
    printf("enter y1 : ");
    scanf("%lf", &y1);
    printf("enter x2 : ");
    scanf("%lf", &x2);
    printf("enter y2 : ");
    scanf("%lf", &y2);
    printf("enter x3 : ");
    scanf("%lf", &x3);
    printf("enter y3 : ");
    scanf("%lf", &y3);

    double m1 = (y2 - y1) / (x2 - x1);
    double m2 = (y3 - y2) / (x3 - x2);
    double m3 = (y3 - y1) / (x3 - x1);

    if (m1 == m2 && m2 == m3)
    {
        printf("all points are on a straight line!!");
    }
    else
    {
        printf("all points are not on a straight line!!!!!!!!!!!!!");
    }

    return 0;
}