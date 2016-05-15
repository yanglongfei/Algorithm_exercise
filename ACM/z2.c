/**Copyright(c):杨龙飞;
  *All right servied:
  *程序名:将换字符串前后对调;
  *程序描述:使用指针把字符串的前后位置调换;
  *创建日期:2015年 05月 26日 星期二 17:06:31 CST
  */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char str[]="ABCN1234dgffg56";
	int length=strlen(str);
	char *p1=str;
	char *p2=str+length-1;
//逐个对调第一个和最后一个,第二个和倒数第二个
//直到达到字符串中间
while(p1<p2)
{
	//对调字符
	char c=*p1;
	*p1=*p2;
	*p2=c;
	//移动指针
	++p1;
	--p2;
}
  printf("string now is %s\n",str);
  return 0;
}
	
