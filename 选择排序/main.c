#include<stdio.h>
int main()
{
    int n,i,j,t;
    scanf("%d",&n);
    int L[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&L[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(L[j]>L[j+1])
            {
                t=L[j];
                L[j]=L[j+1];
                L[j+1]=t;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",L[i]);
    }
    printf("%d\n",L[n-1]);
    return 0;
}
