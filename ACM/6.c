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
	return phead;
}
stu *reset(stu *phead)
{
	stu *p1,*p2,*p3;
	if((phead==NULL) || (phead->next == NULL))
	{
		return phead;
	}
	p1=phead;
	p2=phead->next;
	while(p2!=NULL)
	{
	p3=p2->next;
	p2->next=p1;
	p1=p2;
	p2=p3;
	}
	phead->next=NULL;
	phead=p1;
	return phead;
}
void print(stu *phead)
{
	stu *p=phead;
	while(p!=NULL)
	{
		printf("%d",p->num);
		p=p->next;
	}
	printf("\n");
}
void main()
{
	stu *p,*q;
	p=creat1();
	print(p);
	q=reset(p);
	print(q);
}
