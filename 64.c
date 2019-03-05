#include<stdio.h>
void main()
{
    int n,k,a[1000000],b[10000],i,j,l,x=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]<k)
        {
            b[x]=a[i];
            x++;
        }
    }
    for(i=0;i<x;i++)
    {
            for(j=i+1;j<x;j++)
            {
                if(b[i]>b[j])
                {
                    l=b[i];
                    b[i]=b[j];
                    b[j]=l;
                }
            }

    }
    for(i=0;i<x;i++)
    {
    printf("%d ",b[i]);
    }
}
