#include<stdio.h>
void main()
{
    int n,i,j,s=0,p=1;
    scanf("%d",&n);
    for(i=1;i<n/2;i++)
    {
        while(i)
        {
            p=p*2;
            i--;
        }
        if(p==n)
        {
            s=1;
            break;
        }
    }
        if(s==1)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
   
}
