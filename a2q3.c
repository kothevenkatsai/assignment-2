//Write a program to swap values of two int variables
#include<stdio.h>
void main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    n1=(n1+n2)-(n2=n1);
    printf("n1=%d, n2=%d",n1,n2);
}
