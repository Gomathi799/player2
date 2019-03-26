#include<stdio.h>
void main()
{
    int n,a[10000],l=0,i,j,p,k,x=0,b[1000],m;
    scanf("%d%d%d",&n,&p,&k);
    while(n)
    {
        m=n%10;
        a[l]=m;
        l++;
        n=n/10;
    }
    for(i=l-1;i>=0;i--)
    {
        b[x]=a[i];
        x++;
    }
    printf("%d",b[p+k-1]);
    
}
