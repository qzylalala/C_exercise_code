#include<stdio.h>
#include<string.h>
struct{
char shortname[20];
char fullname[50];
char url[80];}a[1000],b;
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%s%s",a[i].shortname,a[i].fullname,a[i].url);
    }
    for(i=0;i<n;i++)
    {
        printf("%-20s%-40s%s\n",a[i].shortname,a[i].fullname,a[i].url);
    }
    printf("\n");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
        if(strcmp(a[j].shortname,a[j+1].shortname)>0)
        {
            b=a[j];
            a[j]=a[j+1];
            a[j+1]=b;
        }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%-20s%-40s%s\n",a[i].shortname,a[i].fullname,a[i].url);
    }
    return 0;
}
