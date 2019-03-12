#include<stdio.h>
void main()
{
    int n,a[100000],i=0,s=0,l=0;
    scanf("%d",&n);
    while(n)
    {
        a[i]=n%10;
        n=n/10;
        i++;
    }
    for(i=0;a[i]!='\0';i++)
    l=i;
    printf("%d",a[0]+a[l]);
}
