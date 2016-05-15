/*************************************************************************
	> File Name: shexingjuzheng.c
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月22日 星期日 11时07分39秒
 ************************************************************************/

#include<stdio.h>
#define N 100
int main()
{

    int a[N][N],n,key=1,i,j;
    scanf("%d",&n);
    int left=0,right=0,up=0,down=0,m=n/2+1;
    left=up=m+1;
    right=down=n/2-1;
    int row=m-1,col=m-1;
    while(key <= n*n)
    {
        while(key<=n*n && col <= right){
            a[row][col++]=key++;
            col++;
        }
        printf("%d\n",col);
        while(key<=n*n && row >=down){
            a[row--][col]=key++;
        }
        while(key<=n*n && col<=left){
            a[row][--col]=key++;
        }
        while(key<=n*n && row >= down){
            a[--row][col]=key++;
        }


    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }  
        printf("\n");
    }
}

