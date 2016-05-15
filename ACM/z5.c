/**Copyright(c):杨龙飞;
  *All right reserved;   
  *程序名:删除字符;
  *程序描述;从字符串的第ｉ个字符开始删除n个字符;
  *创建日期:2015年 05月 26日 星期二 17:57:40 CST
  */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
char *del_char(char *input,char *output,int n,int i)
{
	int j;
	char *in=input;
	if(in==NULL)
	{
	    printf("arg error!");
	}
	for(j=0;j<i-1;j++)
	{
	    *output++=*in++;
	}
	for(j=0;j<n;j++)
	{
	     in++;
	}
	while(*in!='\0')
	{
	    *output++=*in++;
	}
	*output='\0';
	return output;
}
void main()
{
	char s[N]="yanglongfei";
	char *p=(char *)malloc(strlen(s)-3+1);
	del_char(s,p,3,3);
	printf("%s\n",p);
}	
