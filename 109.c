#include<stdio.h>
void main()
{
    int n,a[10000],i,j,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    j=s;
    for(i=n;i>0;i--)
    {
       j=j-a[i];
       printf("%d ",j);
    }
}
