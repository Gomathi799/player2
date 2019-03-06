#include<stdio.h>
void main()
{
    int n,m,a[100000],i,j,l=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=n;i<n+m;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n+m;i++)
    {
        for(j=i+1;j<n+m;j++)
        {
            if(a[i]>a[j])
            {
                l=a[i];
                a[i]=a[j];
                a[j]=l;
            }
        }
    }
    for(i=0;i<n+m;i++)
    printf("%d ",a[i]);
}
