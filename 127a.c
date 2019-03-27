#include<stdio.h>
void main()
{
    char a[10000],b[10000];
    int n,m,i,j,k=0,l=0;
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
            //printf("%d",i);
            for(j=i;j<n;j++)
            {
                if(a[j]==b[k])
                {
                    a[j]='$';
                    k++;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!='$')
        {
            printf("%c",a[i]);
        }
    }
    
}
        
