#include<stdio.h>
#define CHANGE (Word%2)
int main()
{
    int N,i=0;
    scanf("%d",&N);
	char Word,c;
	getchar();
	while (i<N)
	{
	    Word=getchar();
	    if(CHANGE==0)
            printf("%c",Word);
        else
            {
                if(Word>='a'&&Word<='z')
                    printf("%c", Word-'a'+'A');
                else if(Word>='A'&&Word<='Z')
                    printf("%c",Word-'A'+'a');
                else printf("%c",Word);
            }
    while((c = getchar()) != '\n')
    {
        if (CHANGE==0)
            printf("%c", c);
        else
            {
                if(c>='a'&&c<='z')
                    printf("%c", c-'a'+'A');
                else if(c>='A'&&c<='Z')
                    printf("%c",c-'A'+'a');
                else printf("%c",c);
            }
	}
	i++;
	printf("\n");
	}
	return 0;

}

