/*************************************************************************
	> File Name: kmp.c
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年11月15日 星期日 15时01分41秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>
#define N 100 
void Mnext(char mod[],int next[])
{
    int len=strlen(mod);
    int i=1,k=0;
    next[0]=0;
    while(i<len)
    {
        while(k>0 && mod[k]!=mod[i])
        {
            k=next[k-1];
        }
        if(mod[k]==mod[i])
        {
            k++;
        }
        next[i]=k;
        i++;
    }
}
int kmp(char s[],char m[])
{
    int L1=strlen(s);
    int L2=strlen(m);
    int next[L2];
    int i=0,j=0;
    Mnext(m,next);
    while(i<L1)
    {
        while(j > 0 && s[i] != m[j])
        {
            j=next[j-1];
        }
        if(s[i] == m[j])
        {
           j++;
        }
        if(j==L2)
        {
            return i-j+1;
        }
        i++;
    }
}
int main()
{
    int n;
    char s[N];
    char m[N];
    scanf("%s%s",s,m);
    n=kmp(s,m);
    printf("%d\n",n+1);
    return 0;

    }
