#include<stdio.h>
int stringrev(char *);
void main()
{
    char s[100];
    printf("Enter string:");
    gets(s);
    stringrev(s);
}
int stringrev(char *s)
{
    int l,i,flag;
    char *beg,*end,temp;
    end=s;
    l=strlen(s);
    end=end+l-1;
    beg=s;
    for(i=0;i<l/2;i++)
    {
        if(*beg==*end)
        {
            beg++;
            end--;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
