#include<stdio.h>
int wordcount(char *);
void main()
{
    char s[100];
    printf("Enter string:");
    gets(s);
    printf("%d",wordcount(s));
}
int wordcount(char *s)
{
    int count=1;
    while(*s!='\0')
    {
        if(*s==' ')
            count++;
        s++;
    }
    return count;
}
