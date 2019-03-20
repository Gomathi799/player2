#include<stdio.h>
void main()
{
    char a[10000],b[10000];
    int n,k=0,l=0,i,j,m=0;
    scanf("%[^\n]",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=0;b[i]!='\0';i++);
    m=i;
    for(i=0;i<n;i++)
    {
        if(a[i]==b[0])
        {
            for(j=0;j<m;j++)
            {
                if(a[i+j]==b[j])
                {
                    l=1;
                }
                else
                {
                    l=0;
                    break;
                }
            }
            if(l==1)
            k++;
        }
        }
    printf("%d",k);
}
