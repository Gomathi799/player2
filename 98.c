#include<stdio.h>
void main()
{
    char a[100000];
    int i,j,k=0,l=0,n;
    scanf("%d",&k);
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=0;i<n;i++)
    {
        if(a[i]>=k)
        {
            l++;
        }
    }
    if(n==l)
    printf("yes");
    else
    printf("no");
}
