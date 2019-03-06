#include<stdio.h>
void main()
{
    int a,b,p=1;
    scanf("%d%d",&a,&b);
    while(b)
    {
        p=p*a;
        b--;
    }
    printf("%d",p);
}
