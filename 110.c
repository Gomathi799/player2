#include<stdio.h>
void main()
{
    int n,a[10000],i,j=0,s=0,l=0,b[1000],c[1000],h=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--)
    {
       j=j+a[i];
       b[l]=j;
       l++;
    }
    for(i=l-1;i>=0;i--)
    {
        c[h]=b[i];
        h++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]+b[i]);
    } 
}
