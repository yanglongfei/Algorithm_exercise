/*************************************************************************
	> File Name: add.c
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月13日 星期五 23时38分06秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n,sum=0,t,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        sum+=t;
    }
    printf("%d\n",sum);
    return 0;
}

