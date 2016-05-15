/*************************************************************************
	> File Name: b1.c
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月16日 星期一 17时52分19秒
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100
int main()
{
    int n,i,t=0,temp,j,k;
    int a[N];
    scanf("%d",&n);
    int m=n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //printf("\n");
    for(i=0;i<n-1;i++)
    {
        int k=i;
        for(j=i+1;j<n;j++)
        {
            if(a[k]>a[j])
            {
                k=j;
            }
        }
        if(k!=i)
        {
            temp=a[i];
            a[i]=a[k];
            a[k]=temp;
        }
    }
    for(i=1;i<n;i++)
    {
        t=a[i-1];
        if(a[i]==t)
        {
            a[i-1]=-1;
            m--;
        }
    }
        printf("%d\n",m);
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n");
    return 0;

}
