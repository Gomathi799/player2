#include<stdio.h>
void main()
{
    int n,a[10000],i,j,l=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                l++;
            }
        }
    }
    printf("%d",l);
}
