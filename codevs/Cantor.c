/*************************************************************************
	> File Name: Cantor.c
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月22日 星期日 10时21分01秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n,sum=0,i,temp;
    scanf("%d",&n);
    for(i=0;i<10000;i++)
    {
        sum+=i;
        if(sum >= n)
        {
            if(sum == n){
                if(i%2==0){
                printf("%d/1",i);
                }
                else{
                    printf("1/%d",i);
                }
            }
            else
            {
                 if(i%2 ==0)
                {
                    printf("%d/%d",n-temp,sum-n+1);
                }
                else{
                    printf("%d/%d",sum-n+1,n-temp);
                }
            }
            printf("\n");
            break;
        }
        temp = sum;
    }
    return 0;
}

