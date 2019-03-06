#include<stdio.h>
void main()
{
    int n,i,j,a[1000000],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
        {
            c++;
        }
        if(a[i]>a[i+1])
        {
            break;
        }
    }
    printf("%d",c+1);
}
