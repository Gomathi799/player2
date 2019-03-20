#include<stdio.h>
void main()
{
    int a,b,f1=1,f2=1,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        f1=f1*i;
    }
    for(i=1;i<=b;i++)
    {
        f2=f2*i;
    }
    printf("%d",f1/f2);
}
