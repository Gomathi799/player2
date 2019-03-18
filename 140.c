#include<stdio.h>
void main()
{
    char a[1000],i,j,l=0,n;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=0;i<n;i++)
    {
        if(a[i]=='a'||a[i]=='b')
        l++;
    }
    if(n==l)
    printf("yes");
    else
    printf("no");
}
