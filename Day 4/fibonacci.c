#include<stdio.h>
int fibo(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
void main()
{
    int n,i;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n%d",fibo(i));
    }
}
