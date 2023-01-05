#include<stdio.h>
void main()
{
    int i,j,k;
    for(i='A';i<='D';i++)
    {
        int ch=i;
        for(j='A';j<=i;j++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
}
