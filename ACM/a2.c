/**Copyright(c):杨龙飞;
  *All reserved;
  *程序名:学生成绩管理;
  *文件描述:
  *学生信息录入:从键盘按学号顺序输入n名学生的信息(学号，姓名，性别，４门课的成绩);
  *计算平均值:计算每个学生４门课程成绩的平均值;
  *排序:按平均成绩排序;
  *创建日期:2015年 05月 25日 星期一 23:18:58 CST;
  */
#include <stdio.h>
#define N 100
typedef struct student
{
	int number;
	char name[21];
 	char sex[5];
	int score[4];
	float ave;
}stu;
void Input(stu *p,int n)
{
	int i,j;
	for(i=0;i<n;i++,p++)
	{
	   printf("请输入第%d名学生的信息:\n",i+1);
	   printf("请输入学号:");
	   scanf("%d",&p->number);
	   printf("请输入姓名:");
	   scanf("%s",p->name);
	   printf("请输入性别");
	   scanf("%s",p->sex);
	   for(j=0;j<4;j++)
	  {
	     printf("请输入第%d门成绩:",j+1);
	     scanf("%d",&p->score[j]);
	  }
	}
}
void Calave(stu *p,int n)
{
	int i,j;
	float sum;
	for(i=0;i<n;i++,p++)
	{
	   sum=0.0;
	   for(j=0;j<4;j++)
	   {
	     sum+=p->score[j];
	   }
	   p->ave=sum/4.0;
	}
}
void Sort(stu p[],int n)
{
	int i,j,k;
	stu t;
	for(i=0;i<n-1;i++)
	{
		k=i;
	   for(j=i+1;j<n;j++)
	  {
		if(p[k].ave<p[j].ave)
		{
			k=j;
		}

		if(k!=i)
		{
		  t=p[k];
		  p[k]=p[j];
		  p[j]=t;
		}
       	  }
	}
}
void Output(stu *p,int n)
{
	int i,j;
	printf("********************学生信息如下******************\n");
	printf("学号	姓名	性别	语文	数学	英语	物理	平均成绩\n");
	for(i=0;i<n;i++,p++)
	{
	    printf("%d\t",p->number);
	    printf("%s\t",p->name);
	    printf("%s\t",p->sex);
	    for(j=0;j<4;j++)
	    {
		printf("%d\t",p->score[j]);
	    }
            printf("%.2f\n",p->ave);
	}
}
void main()
{
	stu st[N];
	int n;
	printf("请输入学生个数:");
	scanf("%d",&n);
	Input(st,n);
	Calave(st,n);
	Sort(st,n);
	Output(st,n);
}

	

		








	

