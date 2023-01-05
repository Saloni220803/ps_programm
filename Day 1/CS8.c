#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter value of x coordinate:");
    scanf("%d",&x);
    printf("Enter value of y coordinate:");
    scanf("%d",&y);
    if(x>0 && y>0)
        printf("First Quadrant");
    else if(x<0 && y>0)
        printf("Second Quadrant");
    else if(x<0 && y<0)
        printf("Third Quadrant");
    else if(x>0 && y<0)
        printf("Fourth Quadrant");
}
