#include<stdio.h>
void main()
{
    int n,b=0,i=1,r,l=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%2;
        b=b+r*i;
        i=i*10;
        n=n/2;
    }
    while(b)
    {
        b=b/10;
        l++;
    }
    printf("%d",l);
}
