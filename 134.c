#include<stdio.h>
void main()
{
    int n,i,r,a[1000],min,j,p,x,y;
    scanf("%d%d%d",&n,&p,&r);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==p)
        x=i;
        if(a[i]==r)
        y=i;
    }
    min=a[x];
    for(i=x;i<=y;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("%d",min);
}
