#include<stdio.h>
void main()
{
    int n,a[10000],b[10000],i,j,k=0,c[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                c[k]=a[i];
                k++;
                b[j]='$';
            }
        }
        a[i]='$';
        
    }
    for(i=0;i<k;i++)
    printf("%d ",c[i]);
}
