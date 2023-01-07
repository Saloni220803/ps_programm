#include<stdio.h>
int stringlen(char *);
void main()
{
    char s[100];
    printf("Enter string:");
    gets(s);
    printf("%d",stringlen(s));
}
int stringlen(char *s)
{
    int len=0;
    while(*s != '\0')
    {
        len++;
        s++;
    }
    return len;
}
