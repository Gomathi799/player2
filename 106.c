#include<stdio.h>
void main()
{
    int n,a[10000],b[10000],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='$';
            }
        }
    }
    for(i=0;i<n;i++)
    if(a[i]!='$')
    printf("%d ",a[i]);
}
