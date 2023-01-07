#include<stdio.h>
void main()
{
    int n,i,j,sum=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int f=1;
        for(j=1;j<=i;j++)
        {
            f=f*j;
        }
        sum=sum+f;
    }
    printf("total=%d",sum);
}
