#include<stdio.h>
void main()
{
    long int n, o=0,r,p=1;
    scanf("%ld",&n);
    while(n>0)
    {
        r=n%10;
        o=o+r*p;
        p=p*2;
        n=n/10;
    }
    printf("%lo",o);
}
