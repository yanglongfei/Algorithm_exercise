/**Copyright(c):杨龙飞;
  *All right reserved;
  *程序名:统计二位数组不同数的个数;
  *程序描述:统计给定的二维数组中有多少个互不相同的数,以及每个数出现的频率;
  * 创建日期:2015年 05月 26日 星期二 20:21:46 CST
  */
#include <stdio.h>
#define N 100
void  count_num(int s[][4], int m, int n)
{
	int i,j;
	int cn[m*n];
	for(i=0;i<m*n;i++)
	{
	   cn[i]=0;
	}
        for(i=0;i<m;i++)
	{
	    for(j=0;j<n;j++)
	    {	
		cn[s[i][j]]++;
	    }
	}
        for(i=0;i<m*n;i++)
	{
		if(cn[i]!=0)
		{
 		    printf("%d出现的次数为%d\n",i,cn[i]);
		    printf("%d出现的频率为%.1f%%\n",i,cn[i]/(m*n*1.0)*100);
		}
		else
                 continue;
	}
}
void main()
{
	int cj[4][4]={1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6};
	count_num(cj,4,4);
}
	
	
