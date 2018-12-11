#include<stdio.h>
int main()
{
    int N[10],ch[26];
    char c;
    int i,j,k=0;
    for(i=0;i<10;i++)
    {
        N[i]=0;
    }
    for(j=0;j<26;j++)
    {
        ch[j]=0;
    }
    while((c=getchar())!=EOF)
    {
        if(c>='0'&&c<='9')
        {
            c=c-'0';
            N[c]++;
        }
        else if(c>='a'&&c<='z')
        {
            c=c-'a';
            ch[c]++;
        }
        else if(c>='A'&&c<='Z')
        {
            c=c-'A';
            ch[c]++;
        }
        else k++;
    }
    for(i=0;i<9;i++)
    {
        printf("%d:%d ",i,N[i]);
    }
    printf("9:%d\n",N[9]);
    for(j=0;j<25;j++)
    {
        printf("%c:%d ",j+'a',ch[j]);
    }
    printf("z:%d\n",ch[25]);
    printf("other:%d\n",k);
    return 0;
}
