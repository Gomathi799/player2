#include<stdio.h>
void main()
{
    int n,b=0,l=0,i=1,r;
    scanf("%d",&n);
    while(n)
    {
        r=n%2;
        if(r==1)
        l++;
        b=b+(i*r);
        i=i*10;
        n=n/2;
    }
    printf("%d",l);
    
}
