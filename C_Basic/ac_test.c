#include <stdio.h>

int main()
{
    int a[101]={0};
    int flag=0,k=0;
    int m,n,i;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        a[m]+=n;
    }
    for(i=100;i>=0;i--)
    {
        if(i==0&&a[0])
        {
            k=1;
            printf("%d",a[i]);
            break;
        }
        if(a[i])
        {
            k=1;
            if(a[i]==1)
            {
                if(i==1)
                {
                    printf("x");
                    flag=1;
                }
                else
                {
                    printf("x%d",i);
                    flag=1;
                }
            }
            else if(a[i]==-1)
            {
                if(i==1)
                {
                    printf("-x");
                    flag=1;
                }
                else
                {
                    printf("-x%d",i);
                    flag=1;
                }
            }
            else
            {
                if(i==1)
                {
                    printf("%dx",a[i]);
                    flag=1;
                }
                else
                {
                    printf("%dx%d",a[i],i);
                    flag=1;
                }
            }
        }
        if(flag&&a[i-1]>0)
            printf("+");
    }
    if(k==0)
        printf("0");

    return 0;
}