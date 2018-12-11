#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
struct Node {
	char c;
	struct Node *next;
};
int main(){
	struct Node *head=(struct Node *)malloc(sizeof(struct Node));
	struct Node *tail=head;head->next=NULL;
	int len=0;
	while(scanf("%c",&tail->c)!=EOF){
		if(tail->c=='#') break;
		tail->next=(struct Node *)malloc(sizeof(struct Node));
		tail=tail->next;
		len++;
	}
	tail->c='\0';
	char *s=(char *)malloc(len*sizeof(char));
	tail=head;
	char *p=s;
	for(;tail!=NULL&&tail->c!='\0';tail=tail->next){
		printf("%c",tail->c);
		*s++=tail->c;
	}
	*s='\0';
	printf("\n\n");
	printf("%s",p);printf("\n");
	return 0;

}
