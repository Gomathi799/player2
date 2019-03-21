#include<stdio.h>
void main()
{
    int n,a[10000],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        if(a[i]%a[i-1]==0)
        {
            printf("%d ",a[i]);
        }
    }
}
