//Write a program to print a given number without its last digit.
#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int i=n%10;
    n=n-i;
    printf("%d",(n/10));
}
