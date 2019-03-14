#include<stdio.h>
void main()
{
    long int a,b,c,p=1,s;
    scanf("%ld%ld%ld",&a,&b,&c);
    while(b)
    {
        p=p*a;
        b--;
    }
    s=p%c;
    printf("%ld",s);
}
