#include<stdio.h>
void main()
{
    int a[1000000],n,i,j,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     if((n)%2!=0)
        {
            a[n]=a[n-1];
        }
    for(i=0;i<n;i++)
    {   
        if(i%2==0)
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
    
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    
}
