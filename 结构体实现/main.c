#include<stdio.h>
struct date{
    int year;
    int day;
};
int main()
{
    int Month[11]={31,31,30,31,30,31,31,30,31,30,31};
    int i,j,N,February,month,sum=0;
    struct date a;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d%d%d",&a.year,&month,&a.day);
        if((a.year%4==0&&a.year%100!=0)||a.year%400==0)
            February=29;
        else
            February=28;
        if(month==1) sum=a.day;
        else if(month==2) sum=31+a.day;
        else
        {
            for(j=1;j<month-1;j++)
        {
            sum=sum+Month[j];
        }
        sum=sum+February+a.day;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
