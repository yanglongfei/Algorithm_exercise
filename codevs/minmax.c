/*************************************************************************
	> File Name: minmax.c
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月13日 星期五 23时05分46秒
 ************************************************************************/

#include<stdio.h>
#define N 100
int main()
{
    int n,i;
    long int a[N];
    long int min,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);   
    }
    min=max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i] > max)
        {
            max=a[i];
        }
        if(a[i] < min)
        {
            min=a[i];
        }
    }
    printf("%ld %ld\n",min,max);
    return 0;
}
