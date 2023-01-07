#include<stdio.h>
void main()
{
    int n,i,x,j,r=1;
    float sum=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int f=1;
        x=2*i-1;
        for(j=1;j<=x;j++)
        {
            f=f*j;
        }
        sum=sum+r*(i/f);
        r=r*(-1);
    }
    printf("total=%f",sum);
}
