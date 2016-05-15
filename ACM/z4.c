/**Copyright(c):杨龙飞;
  *All right reserved;
  *程序名:求字符串的长度;
  *文件描述:用指针实现求字符串的有效长度;
  *创建日期:2015年 05月 26日 星期二 17:35:39 CST
  */
#include <stdio.h>
#define N 100
#include <string.h>
int  my_strlen(char *p)
{
	int count=0;
	while(*p!='\0')
	{
	     count++;
	     p++;	
	}
return count;
}
void main()
{
	char s[100];
	int x;
	int a=my_strlen(s);
	printf("a=%d\n",a);
	printf("%s\n" , s);
	printf("%d\n", x);
}
