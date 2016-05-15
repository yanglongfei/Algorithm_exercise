/*************************************************************************
	> File Name: paixu.c
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月22日 星期日 00时17分06秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n,a[100],temp,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=i;j >0;j--)
        {
            if(a[j] < a[j-1])
            {
                temp = a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
