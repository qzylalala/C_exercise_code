#include<stdio.h>
int main()
{
    int N,i,j=0,k,sum=0;
    scanf("%d",&N);
    char c,ch[100];
    getchar();
    for(i=0;i<N;i++)
    {
        while((c=getchar())!='\n')
        {
            ch[j]=c;
            j++;
        }
        for(k=2;k<j;k++)
        {
            if(ch[k]>='0'&&ch[k]<='9') sum=sum*16+ch[k]-'0';
            else if(ch[k]>='a'&&ch[k]<='z') sum=sum*16+ch[k]-'a'+10;
            else sum=sum*16+ch[k]-'A'+10;
        }
        printf("%d\n",sum);
        sum=0;j=0;
    }
    return 0;
}
