/*************************************************************************
	> File Name: dazhe.c
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月14日 星期六 00时11分48秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int price,tmp;
    float rate;
    scanf("%d%f",&price,&rate);
    price=(int)(price*rate/10);
    tmp=price%10;
    if(tmp< 5) 
    {
        price=price-tmp;
    }
    else
    {
        price=price+10-tmp;
    }
    printf("%d\n",price);
    return 0;
}
