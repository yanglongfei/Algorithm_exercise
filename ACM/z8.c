/**Copyright(c):杨龙飞;
  *All right reserved;
  *程序名:连接两个字符串;
  *程序描述:用指针将两个字符串连起来;
  *创建日期:2015年 05月 26日 星期二 19:54:20 CST
  */
#include <stdio.h>
#include <stdlib.h>
char *My_stract(char *dest,char *src)
{
	if(dest==NULL||src==NULL)
	{
		printf("arg error!");
	}
       char *s=dest;
       while(*dest!='\0') dest++;
       while(*dest++=*src++)
	*dest='\0';
	return s;
}
void main()
{
	char s[]="yanglongfei";
	char *p=(char *)malloc(8);
	p="liuhang";
	printf("%s\n",My_stract(s,p));
}
