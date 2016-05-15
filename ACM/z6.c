/**Copyright(c):杨龙飞;
  *All right reserved;
  *程序名:递归函数;
  *文件描述:n=1时,f(n)=1,n=2时，f(n)=1;当n>1时,f(n)=f(n-1)+f(n-2);
  *创建日期:2015年 05月 26日 星期二 19:12:20 CST
  */
#include <stdio.h>
int f(int n)
{
	int m;
	if(n==1 || n==2)
	return 1;
	m=f(n-1)+f(n-2);
	return m;
}
void main()
{
	int t=f(8);
	printf("%d\n",t);
}
  
