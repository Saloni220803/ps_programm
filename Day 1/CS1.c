#include<stdio.h>
void main()
{
    int basic,hra,da,allow,pf;
    char x;
    float total;
    printf("Enter basic Salary:");
    scanf("%d",&basic);
    printf("Enter Grade in capital letter:");
    scanf("%s",&x);
    hra=(20*basic)/100;
    da=(50*basic)/100;
    pf=(11*basic)/100;
    if(x=='A')
    {
        allow=1700;
    }
    else if(x=='B')
    {
        allow=1500;
    }
    else
    {
        allow=1300;
    }
    total=basic+hra+da+allow-pf;
    printf("Total salary:%f",total);
}
