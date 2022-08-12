// 10. Write a program to make the last digit of a number stored in a variable as zero.(Example - if x=2345 then make it x=2340)
#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int t=n%10;
    n=n-t;
    printf("%d",n);
}
