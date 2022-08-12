//13. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int t=n%10;
    n=(n-t)/10;
    t=t*100+n;
    printf("%d",t);

}
