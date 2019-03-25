#include<stdio.h>
void main()
{
    int n,a[1000],m,l=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    l=a[0];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                m=a[j]-a[i];
            }
            else
            {
                m=a[i]-a[j];
            }
            if(m<l)
            {
                l=m;
            }
        }
    }
    printf("%d",l);
    
}
