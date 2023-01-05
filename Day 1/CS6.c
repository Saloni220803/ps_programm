#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter first side:");
    scanf("%d",&a);
    printf("Enter second side:");
    scanf("%d",&b);
    printf("Enter third side:");
    scanf("%d",&c);
    if(a==b && b==c)
        printf("Equilateral Triangle");
    else if(a==b || b==c || a==c)
        printf("Isosceles triangle");
    else
        printf("Scalene Triangle");
}
