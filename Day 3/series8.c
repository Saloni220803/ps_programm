#include<stdio.h>
void main()
{
    int n,i;
    float sum=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*(i+1)*(i+2);
    }
    printf("Total=%f",sum);
}
