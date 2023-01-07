#include<stdio.h>
 int power(int a, int n)
 {
     if(n==0)
     {
         return 1;
     }
     else
     {
         return (a*power(a,n-1));
     }
 }
 void main()
 {
     int n,a;
     printf("Enter values of a and n:");
     scanf("%d%d",&a,&n);
     printf("%d raised to power %d: ",a,n);
     printf("%d",power(a,n));
 }
