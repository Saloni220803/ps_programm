#include<stdio.h>
void main()
{
    char i,j,k;
    for(i='A';i<='C';i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
}
