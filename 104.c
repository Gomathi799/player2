#include<stdio.h>
void main()
{
    int n,a[100000],i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        s=s+a[i]+a[i+1];
    }
    printf("%d",s);
}
