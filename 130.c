#include<stdio.h>
void main()
{
    int n,a[1000],i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(n%2==0)
    {
        for(i=0;i<n;i++)
        {
            s=s+a[i];
            printf("%d ",s);
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    }
}
