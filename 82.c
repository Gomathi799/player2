#include<stdio.h>
void main()
{
    int n,a[10000],i,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    s=a[0];
    for(i=0;i<n;i++)
    {
        s=a[i]&s;
    }
    printf("%d ",s);
}
