#include<stdio.h>
void main()
{
    int n,a[10000],i,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("%d",s);
}
