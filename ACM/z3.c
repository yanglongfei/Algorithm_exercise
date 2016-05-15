/**Copyright(c):杨龙飞;
  *All right reserved;
  *程序名:实现字符串的strcpy;
  *文件描述:用指针实现字符串的复制
  *创建日期:2015年 05月 26日 星期二 17:18:45 CST
  */
#include <stdio.h>
char *strcpy(char *dest,char *src)
{
	if((dest==NULL) || (src==NULL))
	{
		printf("arg wrong!");
	}
char *ret_string = dest;
while((*dest++=*src++)!='\0')
{
	return ret_string;
}
}
void main()
{
	char *str="yanglongfei";
	char s[21];
	printf("%s",strcpy(s,&*str));
}
