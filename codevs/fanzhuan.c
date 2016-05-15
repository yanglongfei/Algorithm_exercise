/*************************************************************************
	> File Name: fanzhuan.c
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月16日 星期一 12时39分44秒
************************************************************************/
#include<stdio.h>
#include<string.h>
#define N 100
int main()
{
    char s[N];
    char ch;
    int i=1,j,t;
    s[0]=' ';
    ch=getchar();
    while(ch!='\n')
    {
        s[i]=ch;
        i++;
        ch=getchar();
    }
    for(j=i-1;j>=0;j--)
    {
        if(s[j] == ' ')
        {
            
            for(t=j+1;t<i;t++)
            {
                printf("%c",s[t]);
                
            }
            if(j!=0)
            {
              printf("%c",s[j]);    
            }
             i=j;
        }
    }
    return 0;
}
