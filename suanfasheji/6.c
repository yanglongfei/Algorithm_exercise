/*************************************************************************
	> File Name: 6.c
	> Author:yanglongfei 
	> Mail:yanglongfei@xiyoulinux.org 
	> Created Time: 2016年03月22日 星期二 21时18分58秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a=10,b=20;
    int *p=NULL;
    int **s=NULL;
    p=&a;
    s=&p;
    *p=100;
    *s=&b;
    printf("a的地址:%p\n",&a);
    printf("b的地址:%p\n",&b);
    printf("s的地址:%p\n",&s);
    printf("p的地址:%p\n",&p);
    printf("%p\n",*s);
    printf("pp%p\n",*&s);
    printf("pp%p\n",&*s);
}
