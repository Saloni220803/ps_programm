#include<stdio.h>
void main()
{
    float x;
    printf("Enter Temperature in Centigrade:");
    scanf("%f",&x);
    if(x<0)
        printf("Freezing Weather");
    else if(0<=x && x<10)
        printf("Very Cold Weather");
    else if(10<=x && x<20)
        printf("Cold Weather");
    else if(20<=x && x<30)
        printf("Normal in Temperature");
    else if(30<=x && x<40)
        printf("Hot");
    else if(x>=40)
        printf("Very Hot");
}
