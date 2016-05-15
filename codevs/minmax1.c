/*************************************************************************
	> File Name: minmax1.c
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月13日 星期五 23时31分21秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n,t,i;
    int min=2147483647;
    int max=-2147483648;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        if(t<min)
        {
            min=t;       
        }
        if(t>max)
        {
            max = t;
        }
    }
    printf("%d %d\n",min,max);
    return 0;
}
