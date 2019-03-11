#include<stdio.h>
void main()
{
    int n,k,p=0,f=1,f1=1,l,i,f2=1;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    for(i=1;i<=k;i++)
    {
        f1=f1*i;
    }
    p=n-k;
    for(i=1;i<=p;i++)
    {
        f2=f2*i;
    }
    l=f/(f1*f2);
    printf("%d",l);
}
