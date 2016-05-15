/*************************************************************************
	> File Name: paixu1.c
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月22日 星期日 00时35分40秒
 ************************************************************************/

#include<stdio.h>
void kuaipai(int a[],int low,int high)
{
    if(low <  high)
    {
        int i=low,j=high,temp=a[low];
        while(i<j)
        {
            while(a[j] >= temp && i<j)
            {
                j--;
            }
            a[i]=a[j];
            while(a[i] <= temp && i<j)
            {
                i++;
            }
            a[j]=a[i];
        }
        a[i]=temp;
        kuaipai(a,low,i-1);
        kuaipai(a,i+1,high);
    }
}
int main()
{
    int a[100001],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    kuaipai(a,0,n-1);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;

}

