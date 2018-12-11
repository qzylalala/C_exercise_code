#include<stdio.h>
void mycpy(char s[],int n);
int main()
{
    int N,n,i,j=0;
    char s[1000];char c;
    scanf("%d",&N);
    getchar();
    for(i=0;i<N;i++)
    {
        while((c=getchar())!=EOF)
        {
            if(c=='\n') break;
            s[j]=c;
            j++;
        }
        scanf("%d",&n);
        getchar();
        mycpy(s,n);
        printf("\n");
        j=0;
    }
    return 0;

}
void mycpy(char s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        putchar(s[i]);
    }

}
