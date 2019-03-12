#include<stdio.h>
void main()
{
    long int n,b,i=1,s=0;
    scanf("%ld",&n);
    while(n)
    {
        b=n%10;
        s=s+b*i;
        i=i*2;
        n=n/10;
    }
      printf("%ld",s);
   
}
