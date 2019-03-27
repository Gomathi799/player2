#include <stdio.h>
 
int main()
{
    long int b,h= 0, i = 1, r;
    scanf("%ld", &b);
    while (b!=0)
    {
        r= b%10;
        h=h+r*i;
        i=i*2;
        b=b/10;
    }
    printf("%lX",h);
    return 0;
}
