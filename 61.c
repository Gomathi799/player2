#include<stdio.h>
void main()
{
    int a[10000],n,x,i,j,sum=0,f=0;
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=a[i]+a[j];
             if(sum==x)
             {
                 f=1;
             }
        }
        if(f==1)
        break;
    }
    if(f==1)
    printf("yes");
    else
    printf("no");
}
