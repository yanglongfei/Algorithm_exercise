#include <stdio.h>
#include <stdlib.h>
#define LEN  sizeof(struct s)
typedef struct s
{
	int num;
	struct s *next;
}stu;
stu *creat1()
{                                                                                                                                               stu *phead,*pnew,*p;
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

stu *creat2()
{
        stu *phead1,*pnew1,*p1; 
        phead1=(stu *)malloc(LEN);
        printf("请输入数据1:");
        scanf("%d",&phead1->num);
        p1=phead1;
        while(1)
        {       
                
                pnew1=(stu *)malloc(LEN);
                printf("请输入数据1:");
                scanf("%d",&pnew1->num);
                 if(pnew1->num==0)
                 {  
                    free(pnew1);
                    break;
                 }
                pnew1->next=NULL;
                p1->next=pnew1;
                p1=pnew1;
        }
        return phead1;
}
stu *sum(stu *phead,stu *phead1)
{
	stu *p=phead,*s=p,*q=phead1;
	while(p!=NULL)
	{
		s=p;
		p=p->next;
	}
	while(q!=NULL)
	{
		s->next=q;
		s=q;
		q=q->next;
	}
	return phead;
}
void print(stu *phead)
{
        stu *s=phead;
        while(s!=NULL)
        {
                printf("%d",s->num);
                s=s->next;
        }
                printf("\n");
}
void main()
{
	stu *m,*n,*d;
	m=creat1();
	print(m);
	n=creat2();
	print(n);
	d=sum(m,n);
	print(d);
}
	
