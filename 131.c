#include<stdio.h>
void  main()
{
    int n,a[1000],i,j,l=0,b[1000],k=0,s=0;
    scanf("%d",&n);
    while(n)
    {
        a[l]=n%10;
        l++;
        n=n/10;
    }
    for(i=l-1;i>=0;i--)
    {
    b[k]=a[i];
    k++;
    }
    for(i=0;i<k;i++)
    {
        if(a[i]%2!=0)
        {
            s=s+a[i];
        }
    }
    if(s%2==0)
    printf("E");
    else
    printf("O");
}
