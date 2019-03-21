#include<stdio.h>
void main()
{
    int n,a[1000],i,j,k=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(i<(i%2==0))
            {
                if(a[i]>a[j])
                printf("%d ",a[i]);
                else
                printf("%d ",a[j]);
            }
        }
    }
}
