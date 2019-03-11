#include<stdio.h>
void main()
{
    int n,k,p=0,f=1,f1=1,l,i;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    p=n-k;
    for(i=1;i<=p;i++)
    {
        f1=f1*i;
    }
    l=f/f1;
    printf("%d",l);
}
