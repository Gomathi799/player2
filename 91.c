#include<stdio.h>
void main()
{
    int n,b,i=1,s=0;
    scanf("%d",&n);
    while(n)
    {
        b=n%2;
        s=s+b*i;
        i=i*10;
        n=n/2;
    }
      printf("%d",s);
   
}
