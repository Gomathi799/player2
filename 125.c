#include<stdio.h>
void main()
{
    int n,c=1,a[10000],d,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    while(c)
    {
        d=0;
        for(i=0;i<n;i++)
        {
            if(a[i]%c==0)
            d++;
        }
        if(d==n)
        break;
        c++;
    }
    printf("%d",c);
}
