#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct s)
typedef struct s
{
	int num;
	struct s *next;
}stu;
stu *creat1()
{
        stu *phead,*pnew,*p;    
        phead=(stu *)malloc(LEN);
        printf("请输入数据:");
        scanf("%d",&phead->num);
        p=phead;
        while(1)
        {
                
                pnew=(stu *)malloc(LEN);
                printf("请输入数据:");
                scanf("%d",&pnew->num);
                 if(pnew->num==0)
                 {
                    free(pnew);
                    break;
                 }
                pnew->next=NULL;
                p->next=pnew;
                p=pnew;
        }
	p->next=phead;
        return phead;       
}
stu  *wd(stu *phead,int n)
{
	int i;
	stu *p=phead,*s=p;
	while(p->next!=p)
	{
		for(i=0;i<n-1;i++)
		{
			s=p;
			p=p->next;
		}
		s->next=p->next;
		free(p);
		p=p->next;
	}
	phead=s;
	return phead;
}
	
void print(stu *phead)
{
	stu *p=phead;
	do
	{
		printf("%d",p->num);
		p=p->next;
	}
	while(p!=phead);
	printf("\n");
}	
				
void main()
{
	int m;
	stu *p,*q;
	p=creat1();
	printf("请输入m的值:");
	scanf("%d",&m);
	q=wd(p,m);
	print(q);
}
