#include<stdio.h>
int main()
{
    int n,k,i;
    int u[60];
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&u[i]);
        }
        for(i=k;i<n;i++)
        {
            printf("%d ",u[i]);
        }
        for(i=0;i<k-1;i++)
        {
            printf("%d ",u[i]);
        }
        printf("%d\n",u[k-1]);
    }
    return 0;
}
