//11. Write a program to input a number from the user and also input a digit. Append a
//    digit in the number and print the resulting number. (Example - number=234 and
//    digit=9 then the resulting number is 2349)
#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a;
    scanf("%d",&a);
    n=n*10+a;
    printf("%d",n);
}
