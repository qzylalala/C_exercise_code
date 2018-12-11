#include<stdio.h>
struct{
long num;
char name[19];
double score;}s[3],*p=&s[0];
int main()
{
    int N,i,j;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%ld%s%lf",&s[j].num,s[j].name,&s[j].score);
        }
        for(j=0;j<3;j++)
        {
            printf("%ld\t%-20s%lf\n",s[j].num,s[j].name,s[j].score);
        }
        for(j=0;j<3;j++)
        {
            printf("%ld\t%-20s%lf\n",(p+j)->num,(p+j)->name,(p+j)->score);
        }
    }
    return 0;
}
