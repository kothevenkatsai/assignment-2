//Write a program to check whether the given number is even or odd using a bitwise operator.
#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
        printf("number is even");
    else
        printf("number is odd");
}
