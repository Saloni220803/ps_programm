#include<stdio.h>
int stringrev(char *);
void main()
{
    char s[100];
    printf("Enter string:");
    gets(s);
    stringrev(s);
    puts(s);
}
int stringrev(char *s)
{
    int l,i;
    char *beg,*end,temp;
    end=s;
    l=strlen(s);
    end=end+l-1;
    beg=s;
    for(i=0;i<l/2;i++)
    {
        temp=*beg;
        *beg=*end;
        *end=temp;
        beg++;
        end--;
    }
}
