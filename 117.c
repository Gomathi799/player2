#include<stdio.h>
void main()
{
    char a[10000];
    int n,i;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=n-1;i>=0;i--)
    printf("%c-",a[i]);
}
