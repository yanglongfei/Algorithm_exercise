/**Copyright(c):杨龙飞;
  *All right  reservied;
  *程序名:实现My_strcmp()
  *程序描述:编写比较两个字符串s1,s2大小的函数，当s1>s2,输出1，当s1=s2,输出0；s1<s2;输出-1；
  *创建日期:2015年 05月 26日 星期二 21:18:10 CST
  */
#include <stdio.h>
int  My_strcmp(char *s1,char *s2)
{
	if(s1==NULL||s2==NULL)
	{
		printf("arg error!");
	}
         int ret;
	while(*s1!='\0'&&*s2!='\0')
	{
		if(*s1==*s2)
		{
   		  *s1++;
		  *s2++;
		}
		else
		{
		   break;
		}
	}
	ret=*s1-*s2;
	if(ret>0)
	return 1;
	else if(ret<0)
	return -1;
	else
         return 0;
}
void main()
{
	int t;
	char  s[5]="liuh";
	char n[7]="liuhan";
	t=My_strcmp(s,n);
	printf("%d\n",t);
}
	
