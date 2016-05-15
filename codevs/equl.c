/*************************************************************************
	> File Name: equl.c
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月13日 星期五 23时41分59秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    if(a-b<=1e-8 && b-a<=1e-8)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
}
