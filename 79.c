#include<stdio.h>
void main()
{
    int n,m,a[100000],b[100000],i,j=0,l=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                b[k]=a[i]-a[j];
                if(l<b[k])
                {
                l=b[k];
                }
                k++;
            }
            if(a[i]<a[j])
            {
                b[k]=a[j]-a[i];
                 if(l<b[k])
                {
                l=b[k];
                }
                k++;
            }
            
        }
    }
    printf("%d",l);
    
}
