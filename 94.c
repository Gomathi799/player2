#include<stdio.h>
void main()
{
    int n,k,j,i=0,l=0,a[1000000];
    scanf("%d",&n);
    while(n)
    {
        a[i]=n%10;
        i++;
        n=n/10;
    }
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                l++;
            }
        }
    }
    if(l>0)
    printf("yes");
    else
    printf("no");
}
