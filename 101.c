#include<stdio.h>
void main()
{
    int n,a[100000],i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(n%2!=0)
    {
        a[n]=a[n-1];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
        s=s+a[i+1];
        else if(a[i]>a[i+1])
        s=s+a[i];
    }
    printf("%d",s);
}
