#include<stdio.h>
int fac(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fac(n-1);
    }
}
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("\nFactorial is:");
    printf("%d\n",fac(n));
}
