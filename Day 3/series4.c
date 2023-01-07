#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,x,j,r=1;
    float sum=0;
    printf("Enter value of x:");
    scanf("%d",&x);
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=r*(-1);
        int f=1;
        for(j=1;j<=i;j++)
        {
            f=f*j;
        }
        sum=sum+r*(pow(x,i)/f);
    }
    printf("total=%f",sum+1);
}

