#include<stdio.h>
void main()
{
    int n,i=0,c=0;
    printf("Enter n:");
    scanf("%d",&n);
    int a[10];
    a[0]=n;
    while (a[i]>0)
    {
        a[i+1]=a[i]-5;
        i++;
        c++;
    }
    while (a[i]!=n)
    {
        a[i+1]=a[i]+5;
        i++;
        c++;
    }
    for (i=0;i<=c;i++)
    {
        printf("%d \t",a[i]);
    }
}
