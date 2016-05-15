/**Copyright(c):杨龙飞;
  *All right reserved;
  *程序名;求最大值;
  *程序描述:用递归的方法求一个有n个元素的int型数组的最大值;
  *创建日期:2015年 05月 26日 星期二 19:23:31 CST
  */
#include <stdio.h>
int Max(int a[],int n)
{
	int m;
	if(n==1)
	{
	    return a[0];
	}
	m=Max(a,n-1);
	if(m>a[n-1])
	{
	   return m;
	}
	else
	{
            return a[n-1];
	}
}
int main()
{
	int a[]={1,2,3,4,5,6,7,78,8};
	printf("最大值=%d",Max(a,9));
	return 0;
}
