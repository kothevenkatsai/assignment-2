//Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n>0)
    {
        sum+=(n%10);
        n/=10;
    }
    printf("%d",sum);
}
