#include <stdio.h>
int main()
{

    int x, y;
    printf("enter your points : ");
    scanf("%d %d", &x, &y);
    if (x == 0 && y == 0)
    {
        printf("the point is on the origin ");
    }
     else if (y == 0)
    {
        printf("point is on x axis");
    }

    else if (x == 0)
    {
        printf("point is on y axis");
    }
    else
    {
        printf("the point is not on x or y axis");
    }

    return 0;
}