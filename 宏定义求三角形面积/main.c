#include<stdio.h>
#include<math.h>
#define sum(a,b,c) (a+b+c)/2
#define area(a,b,c) sqrt(s*(s-a)*(s-b)*(s-c))
int main()
{
	int a,b,c,s;
	double area;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
        {
            s=sum(a,b,c);
            area=area(a,b,c);
            printf("%d ",s);
            printf("%lf\n",area);
        }
	return 0;
}
